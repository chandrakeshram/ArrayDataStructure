/*==================PROBLEM STATEMENT==================
Write a program to print sum of all the subarrays
=======================================================*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"Sum of all the subarrays will be :"<<endl;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<endl;
        }

    }
}
/*======================OUTPUT================
Enter the size of the array:
3
Enter the elements of the array :
1 2 2
Sum of all the subarrays will be :
1
3
5
2
4
2
============================================
*/