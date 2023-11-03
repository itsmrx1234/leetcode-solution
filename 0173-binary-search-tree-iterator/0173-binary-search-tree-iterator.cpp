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
class BSTIterator {
public:
    vector<int>ans;
    void inorder(TreeNode* node){
        if(!node) return ;
        inorder(node->left);
        ans.push_back(node->val);
        inorder(node->right);
    }
    int start=0;
    BSTIterator(TreeNode* root) {
        inorder(root);
        start=0;
    }
    int next() {
        return start<ans.size()?ans[start++]:-1;
    }
    bool hasNext() {
        return start<ans.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */