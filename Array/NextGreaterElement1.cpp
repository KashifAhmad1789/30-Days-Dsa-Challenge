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
// Question -->    https://leetcode.com/problems/next-greater-element-i/
// Main code Start Here

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> t;
        for (int i = 0; i < nums1.size(); i++)
        {
            int a = -1;
            for (int j = nums2.size() - 1; nums2[j] != nums1[i]; j--)
            {
                if (nums2[j] > nums1[i])
                {
                    a = nums2[j];
                }
            }
            t.push_back(a);
        }
        return t;
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}