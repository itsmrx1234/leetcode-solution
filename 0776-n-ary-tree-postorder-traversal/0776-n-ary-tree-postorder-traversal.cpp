class Solution {
public:
    vector<int>ans;
    void helper(Node* node){
        if(!node) return ;
        for(auto it:node->children) helper(it);
        ans.push_back(node->val);
    }
    vector<int> postorder(Node* root) {
        helper(root);
        return ans;
    }
};