/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int longestUnivaluePath(TreeNode* root) {
        int maxi = 0;
        maxPathDown(root, maxi);
        return maxi;
    }
    int maxPathDown(TreeNode* node, int &maxi) {
        if (node == NULL) return 0;
        int left = maxPathDown(node->left, maxi);
        int right = maxPathDown(node->right, maxi);
        if (node->left == NULL || node->left->val != node->val)
            left = 0;
        if (node->right == NULL || node->right->val != node->val)
            right = 0;
        maxi = max(maxi, left + right);
        return max(left, right) + 1;
    }
};
