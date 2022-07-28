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

bool findxinwindows (int arr[],int n, int k, int x){
// CODE HERE
int i;
for (i = 0; i < N; i = i + K)
{
    // Search X in segment starting
    // from index i.
    int j;
    for (j = 0; j < K; j++)
        if (arr1[i + j] == X)
            break;
    // If loop didn't break
    if (j == K)
        return false;
}
// If N is a multiple of K
if (i == N)
    return true;
// Check in last segment if N
// is not multiple of K.
int j;
for (j = i - K; j < N; j++)
    if (arr1[j] == X)
        break;
if (j == N)
    return false;
return true;
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}