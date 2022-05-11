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
//    Question --> https://leetcode.com/problems/largest-number-at-least-twice-of-others/

class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int maxx = INT_MIN;
        int store, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > maxx)
            {
                maxx = nums[i];
                store = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (2 * nums[i] > maxx && nums[i] != maxx)
            {
                return -1;
            }
        }
        return store;
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}