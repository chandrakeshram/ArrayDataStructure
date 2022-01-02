/*=====================ARRAY INTRODUCTION====================================*/
#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,34,1,54,21};  //Here we have defined the array directly
    cout<<"Accessed 3rd Index number:"<<arr[3]<<endl;    //Indexing in array starts from 0
    cout<<"Accessed 2nd Index number:"<<arr[2]<<endl;
    int n;
    cout<<"Enter the size of the array :"<<endl; //Here we have declare the size of the array first
    cin>>n;
    int ar[n];   //Initialized the array
    for(int i=0;i<n;i++){   //for loop is used to take the input of the array
        cin>>ar[i];
    }
    cout<<"The array entered by the user:"<<endl;
    for(int i=0;i<n;i++){  //for loop is used to print the output of the array
        cout<<ar[i]<<" ";
    }
}
/*======================OUTPUT======================
Accessed 3rd Index number:54
Accessed 2nd Index number:1
Enter the size of the array :
5
78 54 66 67 55 66
The array entered by the user:
78 54 66 67 55 
====================================================
*/