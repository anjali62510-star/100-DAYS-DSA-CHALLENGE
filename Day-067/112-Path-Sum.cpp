class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {

        // If tree is empty
        if (root == nullptr) {
            return false;
        }

        // Subtract current node value
        targetSum -= root->val;

        // If it is a leaf node, check the remaining sum
        if (root->left == nullptr && root->right == nullptr) {
            return targetSum == 0;
        }

        // Check left and right subtrees
        return hasPathSum(root->left, targetSum) ||
               hasPathSum(root->right, targetSum);
    }
};