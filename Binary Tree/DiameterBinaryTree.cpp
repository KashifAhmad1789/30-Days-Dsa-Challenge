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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter =0;
        height(root,diameter);
        return diameter;
    }
    int height(TreeNode* node , int &diameter){
        if(node==NULL) return 0;
        int lh = height(node->left,diameter);
         int rh = height(node->right,diameter);
        diameter = max(diameter,lh + rh);
        return 1 + max(lh+rh);
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}