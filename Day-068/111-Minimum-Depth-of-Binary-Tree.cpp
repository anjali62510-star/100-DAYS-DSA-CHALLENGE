class Solution {
public:
    int minDepth(TreeNode* root) {
        // If tree is empty
        if (root == nullptr) {
            return 0;
        }

        // If there is no left child
        if (root->left == nullptr) {
            return 1 + minDepth(root->right);
        }

        // If there is no right child
        if (root->right == nullptr) {
            return 1 + minDepth(root->left);
        }

        // Both children exist
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};