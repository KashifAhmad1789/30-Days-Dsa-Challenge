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
    ListNode* deleteDuplicates(ListNode* head) {
         if(head==NULL || head->next==NULL) return head;
        ListNode* newhead = deleteDuplicates(head->next);
        if(head->val==newhead->val) return newhead;
        else{
            head->next = newhead;
            return head;
        }
        
        /*
        // Second Approach
       
        while(temp->next!=NULL){
if(temp->val==temp->next->val){
    temp->next = temp->next->next;
}else{
    temp = temp->next;
}
        }
        return head;
        
        */
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}