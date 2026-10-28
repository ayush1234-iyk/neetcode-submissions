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
    root->left == subroot->left 
    root->right == sbroot->right then true 

    L R R
    */

    bool same(TreeNode* p,  TreeNode* q ){

              if(p == nullptr && q == nullptr) return true ; 
            if(p == nullptr || q == nullptr) return false ; 

        bool r1 = same(p->left,  q->left) ; 
        bool r2 = same(p->right, q->right) ; 

        if(p->val != q->val) return false ;

      return r1&&r2 ;
        
 
    }

    bool isSubtree(TreeNode* root, TreeNode* subroot) {

        if(root == nullptr) return false ; 

        if(same(root , subroot)){
            return true  ; 
        }


       if(isSubtree(root->left ,subroot) == true ) {
        return true ; 
       }
       if(isSubtree(root->right , subroot) == true){
        return true ; 
       }
        return false  ; 
    }
};
