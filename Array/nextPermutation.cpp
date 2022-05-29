#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct ListNode
{
int val;
ListNode *next;
ListNode() : val(0), next(nullptr){}
ListNode(int x) : val(x), next(nullptr){}
ListNode(int x, ListNode *next) : val(x), next(next){}
};
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
    void nextPermutation(vector<int>& nums) {
        int breakPoint = -1;

    // find a breakpoint:
    for (int i = nums.size() - 1; i > 0; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            breakPoint = i - 1;
            break;
        }
    }

    // if no breakpoint
    if (breakPoint < 0)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    // if found a breakpoint
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] > nums[breakPoint])
        {
            swap(nums[breakPoint], nums[i]);
            reverse(nums.begin() + breakPoint + 1, nums.end());
            break;
        }
    }
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}