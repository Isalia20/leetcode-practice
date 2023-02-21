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
    int good_nodes_counter = 0;

public:
    int dfs(TreeNode* root, int max_val){
        if (root == NULL){
            return max_val;
        }
    
        if (root -> val >= max_val){
            good_nodes_counter++;
        }

        max_val = max(max_val, root -> val);
        int left = dfs(root -> left, max_val);
        int right = dfs(root -> right, max_val);
        
        return max(left, right);
    }

    int goodNodes(TreeNode* root) {
        int max_val = -100000;
        dfs(root, max_val);
        return good_nodes_counter;
    }
};
