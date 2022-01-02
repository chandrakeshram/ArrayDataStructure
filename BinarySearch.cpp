/*=======================PROBLEM STATEMENT====================
Write a program to implement binary search in cpp.
==============================================================
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array :"<<endl;
    cin>>n;
    int key;
    int arr[n];
    int flag;
    flag=0;
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value that you want to search :"<<endl;
    cin>>key;
    int s=0;
    int e=n;
    int mid=(s+e)/2;
    while(s<=e){
        
        if(arr[mid]==key){
            cout<<"Search is successful . Key is found"<<endl;
            break;
        }
        else if(arr[mid]<key){
            s=mid+1;
            
        }
        else {
            e=mid-1;
            
        }
        mid=(s+e)/2;
    }
    if(s>e){
        cout<<"Search is unsuccessful . Key is not found"<<endl;
    }
    
    
    
    
    

    
}
/*====================OUTPUT===================
Enter the size of the array :
5
Enter the elements of the array :
78 2 36 47 22
Enter the value that you want to search :
44
Search is unsuccessful . Key is not found
===============================================
Enter the size of the array :
5
Enter the elements of the array :
78 96 54 85 63
Enter the value that you want to search :
63
Search is successful . Key is found
===============================================
*/
