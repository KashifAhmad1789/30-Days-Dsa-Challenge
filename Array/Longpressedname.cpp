#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
// Questi ~on-- > https : // leetcode.com/problems/long-pressed-name/
//  Main code Start Here
class Solution2
{
public:
    bool isLongPressedName(string name, string typed)
    {
        if (name[0] != typed[0])
            return false;
        int i = 0, j = 0;
        while (i < typed.size() || j < name.size())
        {
            if (typed[i] == name[j])
                j++;
            else if (typed[i] != typed[i - 1])
                return false;
            i++;
        }
        return true;
    }
};
class solution
{
public:
    bool isLongpressedName(string name, string typed)
    {
        int n = name.size();
        int m = typed.size();
        int i = 0, j = 0;
        if (n > m)
            return false;
        while (i < n)
        {
            if (name[i] == typed[j])
            {
                i++;
                j++;
            }
            else if (j != 0 && typed[j] == typed[j - 1])
            {
                j++;
            }
            else
            {
                return false;
            }
        }
        while (j < m)
        {
            if (typed[j] != name[n - 1])
            {
                return false;
            }
            j++;
        }
        return true;
    }
};
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    return 0;
}