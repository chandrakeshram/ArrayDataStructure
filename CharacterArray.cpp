/*====================PROBLEM STATEMENT======================
Check if a character array is a Palindrome or not
=============================================================
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=1;
    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){
            check=0;
            break;
        }
    }
    if(check ==true){
        cout<<"It is a Palindrome "<<endl;
    }
    else {
        cout<<"It is not a Palindrome"<<endl;
    }
}
/*==================OUTPUT=================
5
nitin
It is a Palindrome

5
chand
It is not a Palindrome
============================================
*/