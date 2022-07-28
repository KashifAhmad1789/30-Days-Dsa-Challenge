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
// Question --> https://leetcode.com/problems/maximum-subarray
// Main code Start Here

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int cur_sum = nums[0];
        int max_sum = nums[0];
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            cur_sum = max(nums[i], cur_sum + nums[i]);
            // if(cur_sum>max_sum){
            //     max_sum = cur_sum;
            // }
            max_sum = max(cur_sum, max_sum); // short form of above 3 line
        }
        return max_sum;
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}