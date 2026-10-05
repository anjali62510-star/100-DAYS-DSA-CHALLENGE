class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {

        // If tree is empty or value is not found
        if (root == nullptr) {
            return nullptr;
        }

        // Value found
        if (root->val == val) {
            return root;
        }

        // Search in left subtree
        if (val < root->val) {
            return searchBST(root->left, val);
        }

        // Search in right subtree
        return searchBST(root->right, val);
    }
};