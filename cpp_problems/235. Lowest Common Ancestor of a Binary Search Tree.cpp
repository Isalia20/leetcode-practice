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
    TreeNode* result_tree;

public:
    TreeNode* traverseTree(TreeNode* root, TreeNode* p, TreeNode* q){
        if (root == NULL){
            return result_tree;
        }

        if (p -> val < root -> val and q -> val < root -> val){
            // gadadi marcxniv 
            traverseTree(root -> left, p, q);
        } else if (p -> val > root -> val and q -> val > root -> val){
            // gadadi marjvniv 
            traverseTree(root -> right, p, q);
        } else if (p -> val == root -> val){
            // daabrune p rogorc LCA 
            result_tree = p;
        } else if (q -> val == root -> val){
            // daabrune q rogorc LCA
            result_tree = q;
        } else {
            // daabrune rootis val rogorc LCA 
            result_tree = root;
        }

        return result_tree;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        traverseTree(root, p, q);
        return result_tree;
    }
};
