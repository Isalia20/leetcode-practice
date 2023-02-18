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
        // need to figure out the depth of left and right
        if (root == NULL){
            return counter;
        }

        counter++;    
        int left_val = traverseTree(root -> left, counter);
        int right_val = traverseTree(root -> right, counter);

        if (left_val - right_val < -1 or left_val - right_val > 1){
            return -1;
        }

        return max(left_val, right_val);
    }

    bool isBalanced(TreeNode* root) {
        int counter = 0;
        int result;
        result = traverseTree(root, counter);
        return result != -1;
    }
};
