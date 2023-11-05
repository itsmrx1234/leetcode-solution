class Solution {
public:
    string mergeAlternately(string s1, string s2) {
       string ans;
       int i = 0, j = 0;
       char f;
       while (true) {
           if (i < s1.size())
               ans.push_back(s1[i++]);
           else {
               f = 'i';
               break;
           }
           if (j < s2.size())
               ans.push_back(s2[j++]);
           else {
               f = 'j';
               break;
           }
       }
       if (f == 'i') {
           while (j < s2.size())
               ans.push_back(s2[j++]);
       } else if (f == 'j') {
           while (i < s1.size())
               ans.push_back(s1[i++]);
       }
       return ans;
    }
};
