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
    ListNode* middleNode(ListNode* head) {
        int n = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        temp = head;
        int half = n/2;
        while(half--){
            temp = temp ->next;
        }
        return temp;

      /*  
        ListNode *slow,*fast;
        
        while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        }
        return slow;
        */
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}