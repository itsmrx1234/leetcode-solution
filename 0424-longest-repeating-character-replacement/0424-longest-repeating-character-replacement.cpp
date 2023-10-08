class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int>m;  // storing characters  and their count
        int l =0,max_Occurance=0,res=0;
        
        for(int i =0 ;i < s.size() ; i++){
            
            m[s[i]]++;  // adding value to map
            max_Occurance=max(max_Occurance,m[s[i]]);  // updating the maximum occuring element
            
            if(i-l+1-max_Occurance > k){  // if we get more operations in sliding window (invalid)
                m[s[l]]--; // decreasing count from map
                l++;  // increment  previous pointer
            }
            else res=max(res,i-l+1);    //update result
        }        
        return res;  
    }
};