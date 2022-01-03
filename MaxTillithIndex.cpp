 /*===================PROBLEM STATEMENT=====================
 Given an array of size 'n' .For every i from 0 to n-1 index
 output max at each index
 ===========================================================
 */
 #include <bits/stdc++.h>
 using namespace std;
 int main(){
    int mx=INT32_MIN;
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the arrray :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Max at every ith index is : "<<endl;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
     
 }
 /*====================OUTPUT====================
 Enter the size of the array
5
Enter the elements of the arrray :
4 -9 7 5 6
Max at every ith index is :
4
4
7
7
7
================================================
*/