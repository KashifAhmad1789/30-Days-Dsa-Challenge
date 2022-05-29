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

#include<stack>
int findMinimumCost(string str) {
  // Write your code here
    if(str.length()%2==1) return -1;
    stack<char> s;
    for(int i =0;i<str.length();i++){
        char ch = str[i];
        if(ch=='{') s.push(ch);
        else{
            // ch is closed brace
            if(!s.empty() && s.top()=='{'){
                s.pop();
            }else{
                s.push(ch);
            }
        }
    }
    int a =0, b =0;
    while(!s.empty()){
        if(s.top()=='{'){
            b++;
            
        }else{
            a++;
        }
        s.pop();
    }
    int ans = (a+1)/2+ (b+1)/2;
    return ans;
    }
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}