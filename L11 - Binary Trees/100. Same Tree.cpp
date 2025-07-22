



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
    bool isSameTree(TreeNode* root1, TreeNode* root2) {
    
       // both are NULL,return true
       if(root1 == nullptr and root2 == nullptr) 
              return true;

       // root1 is NULL but root2 is not NULL,then not possible to Same Tree 
       if(root1 == nullptr  and root2 != nullptr) 
          return false;
        
       // root1 is not NULL but root2 is NULL, then not possible to same tree
       if(root1 != nullptr and root2 == nullptr) 
       return false;
        
        bool left = isSameTree(root1->left, root2->left);
        bool right = isSameTree(root1->right,root2->right);
        
        // Root1-data == Root2-data(both are Eqaul)
        bool DataSameValue = root1->val == root2->val;
        
        if(left and right and DataSameValue){
            return true;
        }
        return false;
    }
};