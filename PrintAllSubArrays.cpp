/*====================PROBLEM STATEMENT========================
Print all the possible subarrays for a given array with size N
==============================================================
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"All the Possible Subarrays are :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }

/*==========================OUTPUT====================
4
-1 4 7 2
All the Possible Subarrays are :
-1
-1 4
-1 4 7
-1 4 7 2
4
4 7
4 7 2
7
7 2
2
======================================================*/