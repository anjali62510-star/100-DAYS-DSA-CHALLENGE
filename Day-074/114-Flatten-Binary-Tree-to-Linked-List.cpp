class Solution {
public:
    void flatten(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        // Flatten left and right subtrees
        flatten(root->left);
        flatten(root->right);

        // Store the original right subtree
        TreeNode* rightSubtree = root->right;

        // Move left subtree to the right
        root->right = root->left;
        root->left = nullptr;

        // Find the end of the new right subtree
        TreeNode* current = root;

        while (current->right != nullptr) {
            current = current->right;
        }

        // Attach original right subtree
        current->right = rightSubtree;
    }
};