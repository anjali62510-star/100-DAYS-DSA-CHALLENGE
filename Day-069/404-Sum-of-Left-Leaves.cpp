class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        // If tree is empty
        if (root == nullptr) {
            return 0;
        }

        int sum = 0;

        // Check if left child exists and is a leaf
        if (root->left != nullptr &&
            root->left->left == nullptr &&
            root->left->right == nullptr) {
            
            sum += root->left->val;
        }

        // Recursively check both subtrees
        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);

        return sum;
    }
};