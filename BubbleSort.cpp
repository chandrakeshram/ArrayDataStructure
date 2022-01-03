/*===========================BUBBLE SORT=============================*/
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
    int counter =1;
    while(counter <n){
        for(int i=0;i<n-counter ;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
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
78 96 3 4 55
Sorted Array will be
3 4 55 78 96
============================================
*/