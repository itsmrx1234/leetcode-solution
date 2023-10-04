class Solution {
public:
    vector<string>ans;
    void generate(TreeNode* root,string s){
        if(!root)
        return ;
        if(!root->left&&!root->right){
            s+=to_string(root->val);
            ans.push_back(s);
            return ;
        }
        s+=to_string(root->val);
        s+="->";
        generate(root->left,s);
        generate(root->right,s);
        s.pop_back();
        s.pop_back();
        s+="->";
    }
    int sumNumbers(TreeNode* root) {
        generate(root,"");
        string s;
        int sum=0;
        for(auto its:ans){
            s="";
            for(auto it:its){
                if(isdigit(it))
                s+=it;
            }
            sum+=stoi(s);
        }
        return sum;
    }
};