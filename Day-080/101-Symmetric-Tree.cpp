class Solution {
public:
    bool check(TreeNode* left, TreeNode* right) {

        // Both nodes are empty
        if (left == nullptr && right == nullptr) {
            return true;
        }

        // One node is empty
        if (left == nullptr || right == nullptr) {
            return false;
        }

        // Values are different
        if (left->val != right->val) {
            return false;
        }

        // Compare opposite sides
        return check(left->left, right->right) &&
               check(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }

        return check(root->left, root->right);
    }
};