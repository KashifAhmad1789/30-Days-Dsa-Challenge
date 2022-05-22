#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
struct TreeNode
{
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
    void reverse(ListNode *s, ListNode *e)
    {
        ListNode *p = NULL, *c = s, *n = s->next;
        while (p != e)
        {
            c->next = p;
            p = c;
            c = n;
            if (n != NULL)
                n = n->next;
        }
    }
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL || k == 1)
            return head;
        ListNode *s = head, *e = head;
        int inc = k - 1;
        while (inc--)
        {
            e = e->next;
            if (e == NULL)
                return head;
        }
        ListNode *newhead = reverseKGroup(e->next, k);
        reverse(s, e);
        s->next = newhead;
        return e;
    }
};
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    return 0;
}