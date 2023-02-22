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
    bool dfs(TreeNode* root, double left_bound, double right_bound){
        if (root == NULL){
            return true;
        }

        if (root -> val >= right_bound or root -> val <= left_bound){
            return false;
        }

        return dfs(root -> left, left_bound, root -> val) and dfs(root -> right, root -> val, right_bound);
    }

    bool isValidBST(TreeNode* root) {
        return dfs(root, -INFINITY, INFINITY);;
    }
};
