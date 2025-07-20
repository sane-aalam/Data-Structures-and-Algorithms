

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


/*🧠 Step-by-Step Algorithm:
Check if the tree is empty
If root == NULL, return immediately.
Initialize a queue
Create an empty queue and push the root node into it.
While queue is not empty
Repeat steps 4 and 5 while the queue contains nodes.
Pop the front node
Remove the front node from the queue and process it (print or store its value).
Push child nodes to the queue
If the current node has a left child, push it to the queue.
If it has a right child, push it to the queue.
*/


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        if(root == NULL){
            return {};
        }
        // Initialize a queue
        // Create an empty queue and push the root node into it.
        // Initialize a vector 2D store the all node level wise 
        vector<vector<int>> LevelOrderContainer;
        queue<TreeNode*> nodeQueue;
        nodeQueue.push(root);

        while(!nodeQueue.empty()){
             int size = nodeQueue.size();

             // this vector to store the current-level of binary tree
             vector<int> levelContainer;
             while(size--){
                TreeNode * nodeCurrent = nodeQueue.front();
                nodeQueue.pop();

                levelContainer.push_back(nodeCurrent->val);
                
                // If the current node has a left child, push it to the queue.
                if(nodeCurrent->left != NULL){
                    nodeQueue.push(nodeCurrent->left);
                }
                
                // If the current node has a right child, push it to the queue.
                if(nodeCurrent->right != NULL){
                    nodeQueue.push(nodeCurrent->right);
                }
             }
             LevelOrderContainer.push_back(levelContainer);
        }
        return LevelOrderContainer;
    }
};