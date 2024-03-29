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
    int diameter = 0;

public:
    int traverseTree(TreeNode* root){
        if (root == NULL){
            return 0;
        }

        int left_val = traverseTree(root -> left);
        int right_val = traverseTree(root -> right);
        diameter = max(diameter, left_val + right_val);
        
        return 1 + max(left_val, right_val);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        traverseTree(root);
        return diameter;
    }
};
