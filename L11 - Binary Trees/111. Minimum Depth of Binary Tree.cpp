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
// "Take the minimum of both, and add 1 (for the current node’s level)."
// Edgecase - leftHight == 0 or rightHight == 0, it can happend,then we have to consider 
// This mirrors how a human would explore a tree:
// → dive into both subtrees → get their answers → pick the deeper path → return it with +1.
// → Time & space complexity - 0(N)
// → (n) number of nodes push into recursive call stack

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }

        int leftHieght = minDepth(root->left);
        int rightHieght = minDepth(root->right);
    
        // test-case-2 (pata chale)
        // left hight == 0 same right hight == 0, right consider kar lo,left hight consider kar lo
        // why we adding 1, root (1-hight apni khud ki)
        if(leftHieght == 0){
            return rightHieght + 1;
        }

        if(rightHieght == 0){
            return leftHieght + 1;
        }
        return min(leftHieght,rightHieght) + 1;
    }
};