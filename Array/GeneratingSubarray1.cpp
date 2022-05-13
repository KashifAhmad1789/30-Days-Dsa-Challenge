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

// Main code Start Here

void solve(int arr[], int n){
    // CODE HERE

};
int main()
{

    int arr[] = {1, 2, 3, 4};
    int count = 0;

    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
                
            }
            count++;
            cout << endl;
        }
    }

    cout<<"the total number of subaray is: "<<count;
}