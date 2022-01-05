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

/*In bubble sort we will sort adjacent elements until we get the largest element at the last position
  So the last elements is now sorted so there is no need to run the loop for last elements. Again we 
  will follow same procedure and will swap until we get the second largest element at the second last 
  position.Similarly we will do for the entire array.
  Here we have to maintain a counter variable for avoiding the loop for the sorted part of the array 
  We will run the inner loop from 0 to n-counter in which counter will be initialized with 1 and will
  increment in while loop unless and until it is less than array size.
  We will get the sorted array after the entire procedure .*/
