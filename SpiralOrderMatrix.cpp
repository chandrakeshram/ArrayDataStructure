/*========================PROBLEM STATEMENT======================
Write a program to print the spiral order of the matrix of given 
matrix 
=================================================================
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }

    }
    int row_start=0, col_start=0, row_end=row-1, col_end=col-1;
    cout<<"Spiral Order Print of the Matrix is : "<<endl;
    while(row_start<=row_end && col_start<=col_end){
        for(int column=col_start ;column<=col_end;column++){
            cout<<arr[row_start][column]<<" ";
        }
        row_start++;
        for(int rows=row_start ;rows<=row_end;rows++){
            cout<<arr[rows][col_end]<<" ";
        }
        col_end--;
        for(int column=col_end ;column>=col_start;column--){
            cout<<arr[row_end][column]<<" ";
        }
        row_end--;
        for(int rows=row_end ;rows>=row_start;rows--){
            cout<<arr[rows][col_start]<<" ";
        }
        col_start++;
    }
    cout<<endl;
}
/*=======================OUTPUT=========================
4 5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
Spiral Order Print of the Matrix is :
1 2 3 4 5 10 15 20 19 18 17 16 11 6 7 8 9 14 13 12
========================================================*/