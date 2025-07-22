
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
public:
    int maxDepth(TreeNode* root) {
        
        // edge case 
        // A situation where the input is at its extreme or boundary conditions, often used to test the robustness and correctness of your algorithm.
        if(root == NULL){
            return 0;
        }

        // benfit of doing is,there is no need to explore the queue
        // directly return 
        if(root->left == NULL && root->right == NULL){
            return 1;
        }

        queue<TreeNode*> taskQueue;
        taskQueue.push(root);
        int level = 0;

        // maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
        // what we can do to get maximum-depth of binary tree
        // using level order traversal,get the maximum level tree
        // level == is equal to maximum depth of binary tree
        while(!taskQueue.empty()){
             int sizeTaskQueue = taskQueue.size();
             while(sizeTaskQueue--){
                 TreeNode * currentNode = taskQueue.front();
                 taskQueue.pop();

                // explore the left side of node && right side of node into binary tree 
                 if(currentNode->left != nullptr){
                    taskQueue.push(currentNode->left);
                 }
                 if(currentNode->right != nullptr){
                    taskQueue.push(currentNode->right);
                 }
             }
            //When you complete the 1 level then -> increment of level by 1
            level = level + 1;
        }
        return level;
    }
};