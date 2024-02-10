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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        if(root == nullptr){ return 0; }
        walk(root, low, high, sum);
        return sum;
    }

    void walk(TreeNode* root, int low, int high, int& sum){
        if(root == nullptr){ return; }
        walk(root->left, low, high, sum);
        if(root->val >= low && root->val <= high){ sum+= root->val; }
        walk(root->right, low, high, sum);
    }
};