#define null nullptr

class Solution {
public:
    int parent(TreeNode* root, int target) {
        if (!root) {
            return -1; // Node not found in the subtree
        }
        
        int leftParent = parent(root->left, target);
        int rightParent = parent(root->right, target);
        
        if (leftParent != -1) {
            return leftParent;
        }
        
        if (rightParent != -1) {
            return rightParent;
        }
        
        if ((root->left && root->left->val == target) || (root->right && root->right->val == target)) {
            return root->val; // Parent found
        }
        
        return -1; // Node not found in this subtree
    }
    
    int dfs(TreeNode* root, int target, int depth) {
        if (!root) {
            return -1; // Node not found in the subtree
        }
        
        if (root->val == target) {
            return depth; // Node found
        }
        
        int leftDepth = dfs(root->left, target, depth + 1);
        int rightDepth = dfs(root->right, target, depth + 1);
        
        if (leftDepth != -1) {
            return leftDepth;
        }
        
        if (rightDepth != -1) {
            return rightDepth;
        }
        
        return -1; // Node not found in this subtree
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        int parentX = parent(root, x);
        int parentY = parent(root, y);
        
        int depthX = dfs(root, x, 0);
        int depthY = dfs(root, y, 0);
        
        return (parentX != -1) && (parentY != -1) && (depthX == depthY) && (parentX != parentY);
    }
};