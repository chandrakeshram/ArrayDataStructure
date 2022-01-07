/*==========================PROBLEM STATEMENT================
Write a program to print the largest word in the sentence
=============================================================
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int currentLen=0,maxLen=0;
    int i=0;
    int st=0,maxSt=0;
    while(1){
        if(arr[i]==' '  || arr[i]=='\0'){
            if(maxLen<currentLen){
                maxLen=currentLen;
                maxSt=st;
            }
            currentLen=0;
            st=i+1;
      
        }
        else {
            currentLen++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    for(int i=0;i<maxLen;i++){
        cout<<arr[i+maxSt];
    }
    cout<<endl;
}
/*==================OUTPUT==============
12
do or dying
5
dying
========================================*/