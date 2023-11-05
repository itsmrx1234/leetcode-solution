class Solution { 
public: 
   int findChampion(vector<vector<int>>& grid) { 
        int n = grid.size(); 
        vector<bool> isChampion(n, false); 
 
        for (int i = 0; i < n; ++i) { 
            for (int j = 0; j < n; ++j) { 
                if (i != j && grid[j][i]) { 
                    isChampion[i] = true; 
                } 
            } 
        } 
 
        for (int i = 0; i < n; ++i) { 
            if (!isChampion[i]) { 
                return i; 
            } 
        } 
 
        return -1; 
    } 
 
 
};