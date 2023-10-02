class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        int j = -1;
        for(int i = 0; i<ops.size(); ++i)
        {
            if(ops[i] == "+")
            {
                v.push_back(v[j] + v[j-1]); // if + we have to add the sum of last 2 elements of vector. (v.push_back perform the job for us.)
                ++j;
            }
            else if(ops[i] == "D")
            {
                v.push_back(2*v[j]); // if D we have to push twice of the last element (v.push_back() perform the job for us.)
                ++j;
            }
            else if(ops[i] == "C")  // if C we have to delete the last element (v.pop_back() perform the job for us)
            {
                v.pop_back(); 
                --j;
            }
            else // we have to add the add the element ( v.push_back() perform the job for us)
            {
                v.push_back(stoi(ops[i]));  // stoi(converts an string to int) 
                ++j;
            }
               
        }
		return accumulate(v.begin(),v.end(),0);   // sum of vector elements.
    }
};