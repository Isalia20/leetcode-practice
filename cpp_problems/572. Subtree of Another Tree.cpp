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
    bool traverseTree(TreeNode* root_first, TreeNode* root_second){
        if (root_first == NULL and root_second == NULL){
            return true;
        } else if (root_first == NULL and root_second != NULL){
            return false;
        } else if (root_first != NULL and root_second == NULL){
            return false;
        }

        if (root_first -> val != root_second -> val){
            return false;
        }

        bool left_bool = traverseTree(root_first -> left, root_second -> left);
        bool right_bool = traverseTree(root_first -> right, root_second -> right);

        return left_bool and right_bool;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == NULL){
            return false;
        }
        
        if (root -> val == subRoot -> val){
            bool result = traverseTree(root, subRoot);
            if (result){
                return result;
            }
        }

        bool left_bool = isSubtree(root -> left, subRoot);
        bool right_bool = isSubtree(root -> right, subRoot);

        return left_bool or right_bool;
    }
};
