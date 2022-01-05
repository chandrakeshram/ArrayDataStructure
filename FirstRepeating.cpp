#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    const int  N =1e6+2;  
    int idx[N];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    int minIdx=INT32_MAX;
    for(int i=0;i<n;i++){
        if(idx[arr[i]] != -1){
            minIdx=min(minIdx , idx[arr[i]]);

        }
        else {
            idx[arr[i]]=i;
        }
    }
    if(minIdx==INT32_MAX){
        cout<<"-1"<<endl;
    }
    else {
        cout<<"Index of the first repeating element is :"<<minIdx+1;  //Plus 1 is because we are dealing with 1 based indexing
    }
}
/*======================OUTPUT=========================
5
1 5 8 5 1
Index of the first repeating element is :1
*/