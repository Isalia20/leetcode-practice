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
    vector<int> result;

public:
    int traverseTree(TreeNode* root){
        if (root == NULL){
            return 0;
        }

        traverseTree(root -> left);
        result.push_back(root -> val);
        traverseTree(root -> right);
        
        return 0;
    }

    int kthSmallest(TreeNode* root, int k) {
        traverseTree(root);
        return result[k - 1];
    }
};
