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
    ListNode* reverseList(ListNode* head) {
        
        // Iterative approach
        

        if(head==NULL) return NULL;
        ListNode *p = NULL, *c = head, *n = head->next;
        while(c!=NULL){
           c->next = p;
           p = c;
            c = n;
          if(n!=NULL)  n = n->next;
            
        } 
        return p;
      /*  
        // recursion Approach
         if(head==NULL || head->next==NULL)
            return head;
        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next =NULL;
        return newHead;
       */ 
        
        
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}