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

// Recursion Thinking:
// "If the node is NULL, there's no depth — return 0."
// "For each node, ask its left and right child: what's your max depth?"
// "Take the maximum of both, and add 1 (for the current node’s level)."
// This mirrors how a human would explore a tree:
// → dive into both subtrees → get their answers → pick the deeper path → return it with +1.
// → Time & space complexity - 0(N)
// → (n) number of nodes push into recursive call stack

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }

        // Trust on recursion 100% 
        int leftSideHight = maxDepth(root->left);
        int rightSideHight = maxDepth(root->right);
        int maxbothThem = max(leftSideHight, rightSideHight);
        return maxbothThem + 1;
    }
};

