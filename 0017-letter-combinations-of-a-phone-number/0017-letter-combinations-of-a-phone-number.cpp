class Solution {
public:
    void solve(string digits, int index, string output, vector<string>& ans, vector<string> mapping){
        if(index >= digits.size()){
            ans.push_back(output);
            return;
        }
        
        int num = digits[index] - '0';
        string val = mapping[num];

        for(int i = 0; i < val.size(); i++){
            output.push_back(val[i]);
            solve(digits,index+1,output,ans,mapping);
            output.pop_back();
        }

    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0) return ans;
        int index = 0;
        string output = "";
        vector<string> mapping = {"","","abc","def","ghi", "jkl","mno","pqrs", "tuv","wxyz"};
        solve(digits,index,output,ans,mapping);
        return ans;
    }
};