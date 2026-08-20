class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for (string str : strs) {

        result += to_string(str.length()) + "#" + str;
        }

    return result;

    }

    vector<string> decode(string s) {

    vector<string> result;

    int i = 0;

    while (i < s.length()) {

        int j = i;

        while (s[j] != '#') {
            j++;
        }

        int length = stoi(s.substr(i, j - i));

        j++;

        string str = s.substr(j, length);

        result.push_back(str);

        i = j + length;
    }

    return result;
    }
};
