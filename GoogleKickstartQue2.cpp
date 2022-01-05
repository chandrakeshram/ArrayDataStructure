/*=======================PROBLEM STATEMENT============================
*********************GOOGLE KICKSTART QUESTION************************
Find the no. of record breaking provided the below conditions
1)Record breaking day must be strictly greater than the each of the 
previous days 
2)Must be strictly greater than the following day 
======================================================================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[n]=-1;     //We have taken arr[n] i.e last element as -1 to satisfy 2nd condition
    int mx=-1;     //We have max variable for storing max of all the previous days
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){  //here we have checked that if current 
            ans+=1;                        //element is greater than mx and also greater
        }                                  //following day then it is record breaking day
        mx=max(arr[i],mx);             //here we need to update max for every index
    }
    cout<<"Number of record breaking days will be :"<<ans<<endl;
    
    
}