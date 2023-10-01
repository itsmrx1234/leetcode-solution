class Solution {
public:
    void rev(string &s,int first,int last)
    {
        while(first<last)
        {
            swap(s[first++],s[last--]);
        }
    }
    string reverseWords(string s) {
        int start=0,end=0;
        for(int i=0;i<s.size();i++)
        {
           if(isspace(s[i])||i==s.size()-1)
           {
               end=i-1;
               if(i==s.size()-1 && !isspace(s[i]))
                   end=i;
               rev(s,start,end);
               start=i+1;
           }
        }
     return s;   
    }
};
