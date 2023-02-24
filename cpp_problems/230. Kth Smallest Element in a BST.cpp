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
    int result;
    int counter = 0;
    bool is_set;

public:
    int traverseTree(TreeNode* root, int k){
        if (root == NULL){
            return 0;
        }

        traverseTree(root -> left, k);
        // takes less memory
        if (counter == k - 1 and not is_set){
            result = root -> val;
            is_set = true;
        } else {
            counter++;
        }
        traverseTree(root -> right, k);
        
        return 0;
    }

    int kthSmallest(TreeNode* root, int k) {
        traverseTree(root, k);
        return result;
    }
};
