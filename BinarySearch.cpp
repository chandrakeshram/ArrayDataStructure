/*=======================PROBLEM STATEMENT====================
Write a program to implement binary search in cpp.
==============================================================
*/
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
            
        }
        else {
            e=mid-1;
            
        }
    }
    return -1;
}
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
    cout<<binarySearch(arr,n,key)<<endl;
    
    
    
    

    
}
/*====================OUTPUT===================
Enter the size of the array :
5
Enter the elements of the array :
78 96 47 58 321
Enter the value that you want to search :
444
Key is not found . Search is unsuccessful
===============================================
Enter the size of the array :
5
Enter the elements of the array :
78 96 47 2 66
Enter the value that you want to search :
47
Key is found . Search is successful
==========================================
*/