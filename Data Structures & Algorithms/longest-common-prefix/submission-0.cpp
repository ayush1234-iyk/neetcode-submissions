class Solution {
public:

    string longestCommonPrefix(vector<string>& strs) {

        int n = strs.size();

        if(n == 0) {
            return "";
        }

        string s = strs[0];

        for(int i = 0; i < s.size(); i++) {

            char ch = s[i];

            for(int j = 1; j < n; j++) {

                // agar i position par character different hai
                // ya string chhoti hai
                if(i >= strs[j].size() || strs[j][i] != ch) {
                    return s.substr(0, i);
                }
            }
        }

        return s;
    }
};