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
    int maxPathSum(TreeNode* root) {   
        int maxi = INT_MIN;
        maxpathdown(root,maxi);
        return maxi;
    }
    int maxpathdown(TreeNode* node, int &maxi){
        if(node==NULL) return 0;
        int leftsum = max(0,maxpathdown(node->left,maxi));
        int rightsum = max(0,maxpathdown(node->right,maxi));
        maxi = max(maxi,leftsum+rightsum+node->val);
        return max(leftsum,rightsum)+node->val;
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}