class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {

        // If tree is empty or key is not found
        if (root == nullptr) {
            return nullptr;
        }

        // Search in left subtree
        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        }

        // Search in right subtree
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        }

        // Node to be deleted is found
        else {

            // Case 1: No left child
            if (root->left == nullptr) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            // Case 2: No right child
            if (root->right == nullptr) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            // Case 3: Two children
            TreeNode* successor = root->right;

            // Find smallest node in right subtree
            while (successor->left != nullptr) {
                successor = successor->left;
            }

            // Copy successor value
            root->val = successor->val;

            // Delete successor from right subtree
            root->right = deleteNode(root->right, successor->val);
        }

        return root;
    }
};