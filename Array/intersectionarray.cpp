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

void printIntersection(int arr1[], int n, int arr2[], int m)
{

    // CODE HERE
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
           j++;
        }
        else
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
   
};
int main () {

    int array1[10] = {1, 3, 5, 6, 8, 10, 11, 14, 15, 20};
    int array2[6] = {2, 3, 5, 7, 9, 10};

    printIntersection(array1, 10, array2, 6);

    return 0;

    return 0;
}