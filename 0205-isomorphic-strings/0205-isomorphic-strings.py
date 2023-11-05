class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False

        dic={}
        for i in range(len(s)):
            first=s[i]
            last=t[i]
            if first in dic:
                if dic[first]!=last:
                    return False
            else:
                if last in dic.values():
                    return False
            dic[first]=last
        return True