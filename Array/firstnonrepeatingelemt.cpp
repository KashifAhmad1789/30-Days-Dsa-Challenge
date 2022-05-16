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

int firstNonRepeating(int arr[], int n)
{
    // CODE HERE
    for (int i = 0; i < n; i++)
    {
        int j;
        for ( j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
                break;
           
        }
        if (j == n)
            return arr[i];
    }
    return -1;
};
int main () {
    int arr[] = {9, 4, 9, 6, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << firstNonRepeating(arr, n);
    return 0;

    return 0;
}