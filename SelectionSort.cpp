/*===========================SELECTION SORT=============================*/
#include <bits/stdc++.h>
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
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"Sorted Array will be "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
/*================OUTPUT====================
Enter the size of the array:
5
Enter the elements of the array :
78 96 4 5 2
Sorted Array will be
2 4 5 78 96
============================================
*/