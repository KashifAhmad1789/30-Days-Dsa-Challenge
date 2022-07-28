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

int getpivot (int arr[],int n){
// CODE HERE
int start = 0;
 int end = n-1;
  int mid = (start + end)/2;
  while(start<end){
      if(arr[mid]>=arr[0]) start = mid+1;
      else end = mid;

      mid = (start+end)/2;
  }

return  start;
};
int main () {

int arr[] = {3,8,10,17,1};
int n = sizeof(arr) / sizeof(arr[0]);
cout<<getpivot(arr,n);



return 0;
}