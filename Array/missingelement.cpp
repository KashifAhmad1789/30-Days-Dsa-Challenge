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

int missingelement(int arr[],int n){
// CODE HERE
int total = (n+1)*(n+2)/2  ;
for(int i=0;i<n;i++){
    total -= arr[i];
    return total;
}


};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}