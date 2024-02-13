/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original == nullptr){ return nullptr; }
        TreeNode* reference = nullptr;
        walk(cloned, target, &reference);
        return reference;
    }

    void walk(TreeNode* cloned, TreeNode* target, TreeNode** reference){
        if(cloned == nullptr){ return; }
        walk(cloned->left, target, reference);
        if(cloned->val == target->val){
            *reference = cloned;
            return;
        }
        walk(cloned->right, target, reference);
    }
};