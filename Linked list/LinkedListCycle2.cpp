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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) break;
        }
        if(fast==NULL || fast->next==NULL) return NULL;
        ListNode* ptr1 = head, *ptr2 = slow;
        while(ptr1!=ptr2){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return ptr1;
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}