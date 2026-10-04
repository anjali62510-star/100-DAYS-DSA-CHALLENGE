class Solution {
public:
    int solve(TreeNode* root, int currentNumber) {
        // If node is NULL
        if (root == nullptr) {
            return 0;
        }

        // Build the number
        currentNumber = currentNumber * 10 + root->val;

        // If it is a leaf node
        if (root->left == nullptr && root->right == nullptr) {
            return currentNumber;
        }

        // Recursively calculate left and right
        return solve(root->left, currentNumber) +
               solve(root->right, currentNumber);
    }

    int sumNumbers(TreeNode* root) {
        return solve(root, 0);
    }
};