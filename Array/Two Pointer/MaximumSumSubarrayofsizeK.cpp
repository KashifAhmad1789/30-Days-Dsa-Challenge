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

int MaximumSumSubarrayofsizeK(int arr[], int n){
    // CODE HERE
    int i =0;
    int j =0;
    int max_sum = INT_MIN;
    int cur_sum =0;
    while(j<n){
        cur_sum = cur_sum + arr[j];
        if(j-i+1<k) j++;
        else if((j-i+1==k)){
            max_sum = max(cur_sum,max_sum);
            cur_sum = cur_sum-arr[i];
            i++;
            j++;
        }
    }
return max_sum;
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}