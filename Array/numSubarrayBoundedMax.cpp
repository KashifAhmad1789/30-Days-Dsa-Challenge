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

class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int i =0;
        int j = 0;
        int count = 0;
        int m = 0;
        while(j<nums.size()){
            if(nums[j]>right){
                m = 0;
                i = j+1;
            }
            else if(nums[j]>=left && nums[j]<=right){
                m = j-i+1;
            }
            count +=m;
            j++;
        }
        return count;
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}