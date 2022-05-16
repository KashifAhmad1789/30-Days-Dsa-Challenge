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

int getCountPairs (int arr[],int n, int sum){
// CODE HERE
int count =0;
for(int i =0;i<n;i++){
    for(int j =i+1;j<n;j++){
        if(arr[i]+arr[j]==sum){
            count++;
        }
    }

}
return count;
};
int main () { 

int arr[] = {1,5,7,-1};
int n = sizeof(arr) / sizeof(arr[0]);
cout<<getCountPairs(arr,n,6);



return 0;
}