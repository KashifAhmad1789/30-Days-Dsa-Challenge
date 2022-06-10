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
    bool knows(vector<vector<int>> &M, int a, int b, int n)
    {
        if (M[a][b] == 1)
            return true;
        else
            return false;
    }

public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &M, int n)
    {
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }
        // step 2 : take two element and scheck
        while (s.size() > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if (knows(M, a, b, n))
                s.push(b);
            else
                s.push(a);
        }
        int ans = s.top();
        bool rowcheck = false;
        int zerocount = 0;
        for (int i = 0; i < n; i++)
        {
            if (M[ans][i] == 0)
                zerocount++;
        }
        if (zerocount == n)
            rowcheck = true;

        // col check
        bool colcheck = false;
        int onecount = 0;
        for (int i = 0; i < n; i++)
        {
            if (M[i][ans] == 1)
                onecount++;
        }
        if (onecount == n - 1)
            colcheck = true;

        if (rowcheck == true && colcheck == true)
            return ans;
        else
            return -1;
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}