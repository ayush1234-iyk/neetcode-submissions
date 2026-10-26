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
    bool isSameTree(TreeNode* p, TreeNode* q) {

            // 1.dono node agr null h to true
            // 2. p lef ka val q left val equal h to tru
            // 3. p ka size q ka size ke qual to true

            if(p == nullptr && q == nullptr) return true ; 
            if(p == nullptr || q == nullptr) return false ; 

        bool r1 = isSameTree(p->left,  q->left) ; 
        bool r2 = isSameTree(p->right, q->right) ; 

        if(p->val != q->val) return false ;

      return r1&&r2 ;
        
    }
};
