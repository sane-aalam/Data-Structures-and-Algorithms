
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

// count total number times came into array element
// right - left + 1 = total
// we will keep track each level, have maximum width using this concepts
// [root] = index 0 
// [root->left] = 2 * index + 1;
// [root->right] = 2 * index + 2;

typedef long long ll;
ll mod=1e11;

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
         
         // creation of queue using STL, push into root, index value
         // as you know starting index value would be zero 
         queue<pair<TreeNode*,long long>> q;
         q.push(make_pair(root,0));

        if(root==NULL)
            return 0;

        // The maximum width of a tree is the maximum width among all levels.
        // Simple BFS (level order algorithm)
         int maxWidth = 0;

         while(!q.empty()){

            // on the basic of left, right index value 
            // we can find out the total number of width of the current Level
              long long left = q.front().second;
              long long right = q.back().second;
              int currWidth = right - left + 1;
              maxWidth = max(currWidth,maxWidth);
             
             int size = q.size();
             while(size--){
              // currentNode, current node of index 
              // [node(3), index(2)]
              // we have to explore all other nodes,left side or right side 
              TreeNode * temp = q.front().first;
              long long index = q.front().second;
                 q.pop();

                 if(temp->left != nullptr){
                     q.push({temp->left,(2*index+1) % mod});
                 }

                 if(temp->right != nullptr){
                     q.push({temp->right,(2*index+2) % mod});
                 }
             }
         }
         return maxWidth;
    }
};


















