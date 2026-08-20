class Solution {
public:
    bool isAnagram(string s, string t) {
     if (s.length() != t.length()) {
            return false;
        }
        unordered_map <char, int> freqS;
        unordered_map <char, int> freqT;
        for(char num:s)
        {
            freqS[num]++;
        }

        for(char num:t)
        {
            freqT[num]++;
        }
        
        for(auto pair:freqS)
        {  
            if(pair.second != freqT[pair.first])
            {
                return false;
            }
        }
     return true;
        
    }
};
