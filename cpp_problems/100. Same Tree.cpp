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
    bool compareTrees(TreeNode* p, TreeNode* q){
        if (p == NULL and q == NULL){
            return true;
        } else if (p == NULL and q != NULL){
            return false;
        } else if (p != NULL and q == NULL){
            return false;
        }

        if (p -> val != q -> val){
            return false;
        }

        bool result_1 = compareTrees(p -> left, q -> left);
        bool result_2 = compareTrees(p -> right, q -> right);
        return min(result_1, result_2);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return compareTrees(p, q);
    }
};
