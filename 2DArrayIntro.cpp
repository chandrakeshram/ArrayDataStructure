/*===============BASIC INPUT AND OUTPUT OF 2D Array ==================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter no. of rows: "<<endl;
    cin>>row;
    cout<<"Enter no. of cols :"<<endl;
    cin>>col;
    int arr[row][col];
    cout<<"Enter the elements of 2D array: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The elements of the 2D array are :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*==================OUTPUT========================
Enter no. of rows:
3
Enter no. of cols :
5
Enter the elements of 2D array:
1 4 7 8 9
5 8 7 9 6
1 2 3 4 5
The elements of the 2D array are :
1 4 7 8 9
5 8 7 9 6
1 2 3 4 5
=================================================
*/