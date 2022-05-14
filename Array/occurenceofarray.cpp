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

int solve (int arr[],int n, int k){
// CODE HERE
int count = 0;

for(int i =0;i<n;i++){
    if(arr[i]==k) count++;
}
return count;



};
int main () {

int arr[] = {48,5,9,4,7,6,4,9,6,9,4,9,34,9};
int n = sizeof(arr) / sizeof(arr[0]);
cout << solve(arr,n,9);

    return 0;
}