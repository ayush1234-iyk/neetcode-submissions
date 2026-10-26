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

    int height(TreeNode* node ,  int& diff , bool& ok){

        if(!node ) return  0;  
    
        int lh = height(node->left , diff , ok ) ; 
        int rh  = height(node->right ,  diff , ok ) ; 

        diff = abs(lh - rh) ; 

        if(diff>1){
            ok =  false ; 
        }

        return 1+ max(lh ,  rh) ; 

    }

    bool isBalanced(TreeNode* root) {
        
        if(!root) return 1 ; 

        int diff  =0 ;
        bool ok = true ; 

        height(root ,  diff , ok) ; 
return ok ; 
    }
};
