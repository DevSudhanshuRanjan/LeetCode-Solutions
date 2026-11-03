class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
    if(str.empty()) return "";

        string res = "";
        pair<int, int> mini = minimum(str);

        for (int i = 0; i < mini.first; i++) {
            string sub = str[mini.second].substr(0, i + 1);
            bool flag = true;

            for (int j = 0; j < str.size(); j++) {
                if (str[j].substr(0, i + 1) != sub) {
                    flag = false;
                    break;
                }
            }

            if(!flag) break;

            res = sub;
        }

        return res;
    }

    pair<int, int> minimum(vector<string>& str) {
        int s = str[0].size(), idx = 0;

        for (int i = 1; i < str.size(); i++) {
            if (str[i].size() < s) {
                s = str[i].size();
                idx = i;
            }
        }

        return {s, idx};
    }
};