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

void ReverseArray (int arr[],int n){
// CODE HERE
int start =0;
 int end = n-1;
 for(int i =start;i<end;i++){
     swap(arr[start], arr[end]);
     start++;
     end--;
 }


};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);
ReverseArray(arr,n);
for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}