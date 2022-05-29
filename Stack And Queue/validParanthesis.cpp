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
    bool isValid(string s) {
        stack<char> st;
    int i =0;
    while(i<s.length()){
        if(s[i]=='(' ||s[i]=='[' ||s[i]=='{')
                st.push(s[i]);
        else{
            if(st.empty()){
                
                return false;
            }
            else if((st.top()=='(' && s[i]==')') ||
            (st.top()=='[' && s[i]==']') ||
            (st.top()=='{' && s[i]=='}')
            
                        ){
                            st.pop();
                        }
            else{
                return false;
            }
        }
      
        i++;
    }
        
    if(st.empty()){
        return true;
    }
   return false;
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}