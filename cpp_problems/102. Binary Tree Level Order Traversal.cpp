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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode**>q;
        q.push(&root);
        vector<vector<int>> result;
        if (root == NULL){
            return {};
        }

        while (q.size() != 0){
            vector<int> result_interm;
            int length_of_q = q.size();
            int i = 0;
            while (i < length_of_q){
                TreeNode* root_node = *q.front();
                q.pop();
                cout << root_node -> val << endl;
                result_interm.push_back(root_node -> val);

                if (root_node -> left != NULL){
                    q.push(&root_node -> left);
                }
                if (root_node -> right != NULL){
                    q.push(&root_node -> right);
                }
                i++;
            }
            result.push_back(result_interm);
        }
        return result;
    }
};
