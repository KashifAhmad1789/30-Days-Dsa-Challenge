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

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
            return NULL;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *tail = dummy;
        while (tail != NULL && tail->next != NULL)
        {
            if (tail->next->val == val)
            {
                ListNode *temp = tail->next;
                tail->next = temp->next;
                delete temp;
            }
            else
            {
                tail = tail->next;
            }
        }
        return dummy->next;

        // Recursion Approach

        // if (head == 0) return head; //stopping condition.
        // if (head->val == val)   //if value matches, ignore the element.
        //     return removeElements(head->next, val);
        // else {                          //if does not match consider it.
        //     head->next = removeElements(head->next, val);
        //     return head;
        // }
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}