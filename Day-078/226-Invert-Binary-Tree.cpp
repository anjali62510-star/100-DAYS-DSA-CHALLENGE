class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        // If tree is empty, return nullptr
        if (root == nullptr) {
            return nullptr;
        }

        // Recursively invert left and right subtrees
        invertTree(root->left);
        invertTree(root->right);

        // Swap left and right children
        swap(root->left, root->right);

        return root;
    }
};