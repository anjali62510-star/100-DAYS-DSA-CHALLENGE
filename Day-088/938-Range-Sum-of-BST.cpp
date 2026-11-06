class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {

        // If node is empty, return 0
        if (root == nullptr) {
            return 0;
        }

        // If value is smaller than low,
        // search only the right subtree
        if (root->val < low) {
            return rangeSumBST(root->right, low, high);
        }

        // If value is greater than high,
        // search only the left subtree
        if (root->val > high) {
            return rangeSumBST(root->left, low, high);
        }

        // Current value is inside the range
        return root->val
             + rangeSumBST(root->left, low, high)
             + rangeSumBST(root->right, low, high);
    }
};