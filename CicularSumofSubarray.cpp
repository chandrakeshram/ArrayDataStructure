/*========================PROBLEM STATEMENT=======================
Write a program to calculate the maximum sum of the circular 
subarray from the given array with size N
==================================================================
*/
#include <bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n){
    int currentSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);

    }
    return maxSum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]= -arr[i];

    }
    wrapsum=totalSum + kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
}
/*====================OUTPUT======================
7
4 -4 6 -6 10 -11 12
22
==================================================
*/