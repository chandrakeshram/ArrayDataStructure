/*===============TRANSPOSE AND SUM OF 2D Array ==================*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int row,col,sum;
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
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=arr[i][j];

        }
    
    }
    cout<<"The sum of all the elements of the array is "<<sum<<endl;
}
/*==================OUTPUT========================
Enter no. of rows:
3
Enter no. of cols :
3
Enter the elements of 2D array:
7 8 9
4 5 6
1 2 3
The elements of the 2D array are :
7 4 1
8 5 2
9 6 3
The sum of all the elements of the array is 45
=================================================
*/