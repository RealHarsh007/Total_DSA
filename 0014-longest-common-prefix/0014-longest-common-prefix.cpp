class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        sort(strs.begin(), strs.end());

        string fstr = strs[0];
        string lstr = strs[n - 1];

        int i = 0;

        for (i = 0; i < fstr.size() && i < lstr.size(); i++) {
            if (fstr[i] != lstr[i]) {
                break;
            }
        }

        return fstr.substr(0, i);
    }
};