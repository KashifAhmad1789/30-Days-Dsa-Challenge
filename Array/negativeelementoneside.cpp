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

void rearrange (int arr[],int n){
// CODE HERE
int j =0;
for(int i =0;i<n;i++){
    if(arr[i]<0){
        if(i!=j)
            swap(arr[i],arr[j]);
            
            j++;
        
    }
}


};
int main () {

int arr[] = {1,2,3,4,-5,-3,-2,7,4,6};
int n = sizeof(arr) / sizeof(arr[0]);
rearrange(arr,n);
for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
}



return 0;
}