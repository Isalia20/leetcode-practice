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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode**> q;
        vector<int> result;
        q.push(&root);

        if (root == NULL){
            return {};
        }

        while (q.size() != 0){
            int length_of_q = q.size();
            int i = 0;
            while (i < length_of_q){
                TreeNode* root_node = *q.front();
                q.pop();
                if (i == length_of_q - 1){
                    result.push_back(root_node -> val);
                }

                if (root_node -> left != NULL){
                    q.push(&root_node -> left);
                }
                if (root_node -> right != NULL){
                    q.push(&root_node -> right);
                }
                i++;
            }
        }
        return result;
    }
};
