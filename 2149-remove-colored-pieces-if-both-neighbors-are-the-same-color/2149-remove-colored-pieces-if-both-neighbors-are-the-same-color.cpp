class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice_count=0,bob_count=0;
        for(int i=1;i<colors.size()-1;i++){
            if(colors[i-1]==colors[i]&&colors[i]==colors[i+1]){
                if(colors[i]=='A')
                 alice_count++;
                else
                 bob_count ++; 
            }
        }
        return alice_count>bob_count;
        
    }
};