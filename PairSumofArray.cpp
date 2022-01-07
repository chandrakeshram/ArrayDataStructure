/*==================PROBLEM STATEMENT=======================
Print the pair of any elements of the array whose sum is 
equal to the given number K
===========================================================*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int low =0;
int high=n-1;
int k;
cin>>k;
for(int i=0;i<n;i++){
    if(arr[low]+arr[high]==k){
        cout<<low<<" "<<high<<endl;
        return 1;
        
    }
    else if(arr[low]+arr[high]>k){
        high--;
    }
    else {
        low++;
    }
}
return false;

}
/*===============OUTPUT======================
8
2 4 7 11 14 16 20 21
25
1 7
=============================================
*/