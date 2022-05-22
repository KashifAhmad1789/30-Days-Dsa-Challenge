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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA;
        ListNode *b = headB;
        while(a!=b){
              if(headA==headB) return headB;
            if(a==NULL) a = headB;
                else a = a->next;
            
             if(b==NULL) b = headA;
                else b = b->next;
            
            }
        return a;
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}