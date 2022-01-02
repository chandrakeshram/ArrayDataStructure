/*=========================PROBLEM STATEMENT=========================
Write a program to calculate the sum of the array and also write a 
program to calculate the largest and smallest number in the array
=====================================================================*/
#include <bits/stdc++.h>
using namespace std;
int sumOfArray(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

    }
    return sum;
}
void minMaxOfArray(int arr[],int n){
    int max=INT16_MIN;
    int min=INT16_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Max element of the array is "<<max<<endl;
    cout<<"Min element of the array is "<<min<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"The sum of all elements in the array is "<<sumOfArray(arr,n)<<endl;
    minMaxOfArray(arr ,n);

}
/*===================OUTPUT========================
Enter the size of the array:
5
78 96 4 85 7
The sum of all elements in the array is 270
Max element of the array is 96
Min element of the array is 4
===================================================
*/