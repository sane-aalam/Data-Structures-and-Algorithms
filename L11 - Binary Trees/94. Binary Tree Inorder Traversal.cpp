
#include <bits/stdc++.h>
using namespace std;

//  * Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
private:
    void helperInorderMethod(TreeNode* root,vector<int>& inorder){
        if(root == nullptr){
            return;
        }

        // go to left node + print the node + go to right node
        // backtracking - trust on recursion 
        helperInorderMethod(root->left,inorder);
        inorder.push_back(root->val);
        helperInorderMethod(root->right,inorder);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int> inorder;
         helperInorderMethod(root,inorder);
         return inorder;
    }
};