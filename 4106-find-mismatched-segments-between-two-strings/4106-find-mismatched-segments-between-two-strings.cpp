class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> res;

        int i = 0;

        while (i < s1.length()) {

            // Skip matching characters
            if (s1[i] == s2[i]) {
                i++;
                continue;
            }

            // We found the beginning of a mismatched segment
            string a = "";
            string b = "";

            while (i < s1.length() && s1[i] != s2[i]) {
                a += s1[i];
                b += s2[i];
                i++;
            }

            res.push_back({a, b});
        }

        return res;
    }
};