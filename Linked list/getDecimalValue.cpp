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
    int getDecimalValue(ListNode* head) {
        int ans =0;
        ListNode* temp = head;
        while(temp!=NULL){
            ans *= 2;
            ans = ans+ (temp->val) ; //  ans = ans + (temp->val)*2(pow)0     this is original
            temp = temp->next; 
        }
        return ans;
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}