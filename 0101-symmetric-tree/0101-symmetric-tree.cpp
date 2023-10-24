class Solution {
public:
    bool issym(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            if (nums[i++] != nums[j--])
                return false;
        }
        return true;
    }

    bool isSymmetric(TreeNode* root) {
        if (!root)
            return true; // An empty tree is symmetric by definition
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> levelValues;
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();
                levelValues.push_back(node ? node->val : -101);
                if (node) {
                    q.push(node->left);
                    q.push(node->right);
                }
            }
            if (!issym(levelValues))
                return false;
        }
        return true;
    }
};