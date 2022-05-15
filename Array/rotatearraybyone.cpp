#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
/********************************** Boiler Plate End  ***********************************************************/

// Main code Start Here

void rotate (int arr[],int n){
// CODE HERE
int x = arr[n-1], i;
for(i = n-1;i>0;i--){
    arr[i] = arr[i-1];
   
}
arr[0] = x;
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);
rotate(arr,n);
for(int i =0;i<n;i++){
cout<<arr[i]<<" ";
}


return 0;
}