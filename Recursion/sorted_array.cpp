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

bool isSorted (int arr[],int n){
// CODE HERE
if(n==0 or n==1) return true;
if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
    return true;
}
return false;

};
int main () {

int arr[] = {1,2,3,5,4};
int n = sizeof(arr) / sizeof(arr[0]);
cout<<isSorted(arr,n);


return 0;
}