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
#define INF = INT_MAX - 1;
int coinChange(vector<int> &coins, int amount)
{

    int n = coins.size();

    int t[n + 1][amount + 1];
    // initialization
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= amount; j++)
        {
            if (j == 0)
                t[i][j] = 0;
            if (i == 0)
                t[i][j] = INT_MAX - 1;
            if (i == 1)
            {
                if (j % coins[i - 1] == 0)
                    t[i][j] = j / coins[i - 1];
                else
                    t[i][j] = INT_MAX - 1;
            }
        }
    }

    t[0][0] = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= amount; j++)
            if (coins[i - 1] <= j)
                t[i][j] = min(t[i - 1][j], 1 + t[i][j - coins[i - 1]]);
            else
                t[i][j] = t[i - 1][j];

    int res = t[n][amount];
    return (res == INT_MAX - 1) ? -1 : res;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    return 0;
}