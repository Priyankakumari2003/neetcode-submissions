class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(int i=0; i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                ans+=tolower(s[i]);
            }
        }
        string palindromString = ans;
        reverse(palindromString.begin(), palindromString.end());
        if(ans == palindromString)
        {
            return true;
        }
        else {
            return false;
        }

    }
};
