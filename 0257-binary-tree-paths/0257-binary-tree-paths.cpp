class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        generatePaths(root, "", ans);
        return ans;
    }
    
    void generatePaths(TreeNode* node, string path, vector<string>& ans) {
        if (!node) return;
        
        if (path.empty()) {
            path = to_string(node->val);
        } else {
            path += "->" + to_string(node->val);
        }
        
        if (!node->left && !node->right) {
            ans.push_back(path);
            return;
        }
        
        generatePaths(node->left, path, ans);
        generatePaths(node->right, path, ans);
    }
};