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


int main () {

string str = "kashif";
stack<char> st;
for(int i =0;i<str.length();i++){
    char ch = str[i];
    st.push(ch);
}

string ans = " ";

while(!st.empty()){
    char ch = st.top();
    ans.push_back(ch);
    st.pop();
}

cout<<"the answer is "<<ans<<endl;

return 0;
}