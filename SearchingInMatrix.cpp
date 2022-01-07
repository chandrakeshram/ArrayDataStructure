/*=================PROBLEM STATEMENT=================
Search an element in a 2D Array with a given key
====================================================
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int k;
    cin>>k;
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==k){
                flag=1;
                cout<<i<<" "<<j<<endl;
                break;
            }
            
        }
    }
    if(flag==1){
        cout<<"Element found."<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}
/*=====================OUTPUT==============
3 3
1 2 3
4 5 6
7 8 9
12
Element not found

3 3
1 2 3
4 5 6
7 8 9
5
1 1
Element found.
===========================================
*/