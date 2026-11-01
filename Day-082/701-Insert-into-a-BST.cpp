class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {

        // If the position is empty, insert the new node
        if (root == nullptr) {
            return new TreeNode(val);
        }

        // If value is smaller, insert in left subtree
        if (val < root->val) {
            root->left = insertIntoBST(root->left, val);
        }

        // If value is greater, insert in right subtree
        else {
            root->right = insertIntoBST(root->right, val);
        }

        // Return the updated root
        return root;
    }
};