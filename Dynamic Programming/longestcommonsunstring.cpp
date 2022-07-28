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
    int longestCommonSubstr(string S1, string S2, int n, int m)
    {
        int dp[n + 1][m + 1]; // DP - matrix

        // base condition
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= m; j++)
                if (i == 0 || j == 0)
                    dp[i][j] = 0; //

        // choice diagram
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                if (S1[i - 1] == S2[j - 1])          // when both string's last char is same
                    dp[i][j] = 1 + dp[i - 1][j - 1]; // count the number and decrement the table
                else
                    dp[i][j] = 0; // variation from LCS(DP)

        int mx = INT_MIN;
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= m; j++)
                mx = max(mx, dp[i][j]);

        return mx;
    }
};

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    return 0;
}