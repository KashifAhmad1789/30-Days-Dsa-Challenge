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

int power (int a,int n){
// CODE HERE

if(n==0){
    return 1;
}
return a * power(a,n-1);

};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);
int a , c; 
cin>>a>>c; 
cout<<power(a,c);


return 0;
}