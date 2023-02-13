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
    int traverseTree(TreeNode* root, int counter){
        if (root == NULL){
            return counter;
        }
        counter++;

        int left = traverseTree(root -> left, counter);
        int right = traverseTree(root -> right, counter);
        return max(left, right);
    }

    int maxDepth(TreeNode* root) {
        int counter = 0;
        return traverseTree(root, counter);
    }
};
