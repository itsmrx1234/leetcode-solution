class Solution {
public:
    int numberOfSubstrings(string s)
    {
        int l=0,r=0,end=s.length()-1,n=s.length(),count=0;
        unordered_map<char,int>map(3);
        while(r<n)
        {
            map[s[r]]++;
              while(map['a']>=1 && map['b']>=1 && map['c']>=1)
            {
                map[s[l]]--;
                l++;count+=1+(end-r);
            }
            r++;
        }
        return count;
    }
};