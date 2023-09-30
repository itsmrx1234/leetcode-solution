class Solution {
public:
    string makeFancyString(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (st.size() < 2) {
                st.push(s[i]);
            } else if (st.size() >= 2) { 
                char a = st.top();
                st.pop();
                char b = st.top();
                if (a == b && b == s[i]) {
                    st.push(a);
                } else {
                    st.push(a);
                    st.push(s[i]);
                }
            }
        }
        string ans;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};