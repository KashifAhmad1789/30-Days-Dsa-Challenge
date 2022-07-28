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
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while(left < right){
            int sum = numbers[left] + numbers[right];
            if(sum < target)
                ++left;
            else if(sum > target)
                --right;
            else
                break;
        }
        return {left + 1, right + 1};
        
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}