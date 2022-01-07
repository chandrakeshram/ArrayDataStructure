/*=================PROBLEM STATEMENT======================
Write a more optimized searching method for searching in a 
2D Matrix
===========================================================
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int row,col,k;
    cin>>row>>col>>k;
    
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    bool flag=false ;
    int r=0,c=col-1;
    while(r<row  && c>=0){
        if(arr[r][c]==k){
            flag=true;
            break;
        }
        else if(arr[r][c]>k){
            c--;
        }
        else {
            r++;
        }
    }
    if(flag){
        cout<<"Element found"<<endl;
    }
    else {
        cout<<"Element does not exist"<<endl;
    }
}
/*====================OUTPUT========================
3 3 8
1 2 3
4 5 6
7 8 9
Element found

2 2 8
1 2
3 4
Element does not exist
====================================================
*/