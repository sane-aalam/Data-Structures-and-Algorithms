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
//   [abs(leftHight - righHight <= 1)] = this is complete formula to this solve this problem
// <bool,int> 
// bool - this will provide true,flase(balanced or not)
// int - this will provide hight of left,right side node of binary tree
  pair<bool,int> isBalancedTREE(TreeNode* root){

    if(root == nullptr){
        pair<bool,int>p=make_pair(true,0);
        return p;
    }

    pair<bool,int> leftcall = isBalancedTREE(root->left);
    pair<bool,int> rightcall = isBalancedTREE(root->right);

    bool leftAns = leftcall.first;
    bool rightAns = rightcall.first;

    bool diff = abs(leftcall.second - rightcall.second) <= 1;

    pair<bool,int> ans;
    ans.second = max(leftcall.second,rightcall.second) + 1;

    if(leftAns && rightAns && diff){
        ans.first = true;
        // ans of first store boolean
        // ans of secon store maximum height 
    }else{
        ans.first = false;
    }
    return ans;
}
public:
    bool isBalanced(TreeNode* root) {
        bool result = isBalancedTREE(root).first;
        return result;
    }
};