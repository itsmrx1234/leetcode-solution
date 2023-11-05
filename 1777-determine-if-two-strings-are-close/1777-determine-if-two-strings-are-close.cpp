class Solution {
public:
    bool closeStrings(string s, string t) {
        map<char,int> m,mp;
        for(auto &_s: s) m[_s]++;
        for(auto &_t: t) mp[_t]++;
        vector<char> v1,v2;
        vector<int> x1,x2;
        for(auto &_m: m){
            v1.push_back(_m.first);
            x1.push_back(_m.second);
        }
        for(auto &_m: mp){
            v2.push_back(_m.first);
            x2.push_back(_m.second);
        }
        sort(begin(v1),end(v1));
        sort(begin(v2),end(v2));
        sort(begin(x1),end(x1));
        sort(begin(x2),end(x2));
        return v1 == v2 && x1 == x2;
    }
};