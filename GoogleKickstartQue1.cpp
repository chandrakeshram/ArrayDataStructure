/*====================PROBLEM STATEMENT===================
*******************GOOGLE INTERVIEW QUESTION**************
Calculate the largest arithmetic sub array 
==========================================================*/
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
    int ans =2;
    int pd =arr[1]-arr[0];
    int curr_ans=2;
    int j=2;
    while(n>j){
        if(pd==arr[j]-arr[j-1]){
            curr_ans++;
        }
        else {
            pd=arr[j]-arr[j-1];
            curr_ans=2;
        }
        ans=max(curr_ans,ans);
        j++;
        
    }
    cout<<"Largest Arithmetic Subarray :" <<ans<<endl;

}
/*===================OUTPUT===========================
Enter the size of the array:
7
Enter the elements of the array :
10 7 4 6 8 10 11
Largest Arithmetic Subarray :4
=====================================================
*/