/*==========================PROBLEM STATEMENT==========================
Print the sub array with given sum 
=======================================================================
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int S;
    cin>>S;
    int i,j,st,en,sum;
    sum=0;
    i=0;
    j=0;
    st=-1;
    en=-1;
    while(j<n && sum+arr[j]<=S){
        sum+=arr[j];
        j++;

    }
    if(sum==S){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n){
        sum+=arr[j];
        while(sum>S){
            sum-=arr[i];
            i++;
        }
        if(sum==S){
            cout<<i+1<<" "<<j+1<<endl;
            break;
        }
        else{
            j++;
        }
    }
}
/*==================OUTPUT===================
5
1 2 3 7 5
12
2 4
==============================================
*/