class Solution {
public:

    bool check(TreeNode* root, long long minVal, long long maxVal) {

        // Empty tree is a valid BST
        if (root == nullptr) {
            return true;
        }

        // Check whether current node is within the valid range
        if (root->val <= minVal || root->val >= maxVal) {
            return false;
        }

        // Check left and right subtrees
        bool left = check(root->left, minVal, root->val);
        bool right = check(root->right, root->val, maxVal);

        return left && right;
    }

    bool isValidBST(TreeNode* root) {

        return check(root, LLONG_MIN, LLONG_MAX);
    }
};