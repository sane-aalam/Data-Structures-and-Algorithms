
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
    bool solve(TreeNode* root1, TreeNode* root2){
        
        if(root1 == nullptr and root2 == nullptr){
            return true;
        }
        if(root1 == nullptr and root2 != nullptr){
            return false;
        }
        if(root1 != nullptr and root2 == nullptr){
            return false;
        }
        
// check whether it is a mirror of itself (i.e., symmetric around its center).
        bool Option1 = solve(root1->left,root2->right);
        bool Option2 = solve(root1->right,root2->left);
        
        bool data = root1->val == root2->val;
        
        if(Option1 and Option2 == data){
            return true;
        }
        return false;
    }
public:
    bool isSymmetric(TreeNode* root) {
        
        // pass (root->left and root->right)
        return solve(root->left, root->right);
    }
};