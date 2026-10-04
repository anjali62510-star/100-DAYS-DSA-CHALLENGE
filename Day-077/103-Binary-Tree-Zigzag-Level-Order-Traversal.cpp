class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;

        if (root == nullptr) {
            return result;
        }

        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> level(size);

            for (int i = 0; i < size; i++) {
                TreeNode* current = q.front();
                q.pop();

                // Decide where to place the current value
                int index;

                if (leftToRight) {
                    index = i;
                } else {
                    index = size - 1 - i;
                }

                level[index] = current->val;

                // Add children to queue
                if (current->left != nullptr) {
                    q.push(current->left);
                }

                if (current->right != nullptr) {
                    q.push(current->right);
                }
            }

            result.push_back(level);

            // Change direction for next level
            leftToRight = !leftToRight;
        }

        return result;
    }
};