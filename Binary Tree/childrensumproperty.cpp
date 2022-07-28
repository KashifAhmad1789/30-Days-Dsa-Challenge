#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
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

// GFG SOLUTION OF CHILD SUM RPOPERTY

class Solution
{
public:
    // Function to check whether all nodes of a tree have the value
    // equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
        if (root == NULL)
            return 1;
        if (root->left == NULL && root->right == NULL)
            return 1;

        else
        {
            int sum = 0;
            if (root->left)
                sum += root->left->data;
            if (root->right)
                sum += root->right->data;
            if (sum != root->data)
                return 0;
        }

        bool a = isSumProperty(root->left);
        bool b = isSumProperty(root->right);

        return a & b;
    }
};

void changeTree(TreeNode  *root){
    if(root==NULL) return;
    int child = 0;
    if(root->left) child+=root->left->val;
    if(root->right) child+=root->right->val; 

    if(child>=root->val) root->val = child;
    else{
        if(root->left) root->left->val = root->val;
        else if(root->right) root->right->val = root->val;
    }
    changeTree(root->left);
    changeTree(root->right);

    int total =0;
    if (root->left)
        total += root->left->val;
    if (root->right)
        total += root->right->val;

    if(root->left || root->right) root->val = total;
}
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}