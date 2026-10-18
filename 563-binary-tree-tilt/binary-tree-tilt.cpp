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
int tilt=0;
int sum(TreeNode* root) {
    if (root == nullptr) return 0;
    int left=sum(root->left);
    int right=sum(root->right);
    tilt=tilt+abs(left-right);
    return root->val+right+left;
    }
    int findTilt(TreeNode* root) {
        sum(root);
        return tilt;}
};