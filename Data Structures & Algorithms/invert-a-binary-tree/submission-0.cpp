/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    /*
        parent is on the same position 
        1. left is converting into right  
        2. right is converting into left 
        APPROACH:- 
        swap it root-left , root-right
    */

    void solve(TreeNode* node){

        if(node == nullptr) {return;} 

        swap(node->left ,  node->right) ; 
        solve(node->left) ; 
        solve(node->right) ; 
        return  ; 
    }

    TreeNode* invertTree(TreeNode* root) {
            solve(root) ; 
            return root ; 
    }
};
