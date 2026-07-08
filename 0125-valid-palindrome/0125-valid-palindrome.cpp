class Solution {
public:
    bool isValid(char c) {
        return (c >= '0' && c <= '9') ||
               (tolower(c) >= 'a' && tolower(c) <= 'z');
    }

    bool isPalindrome(string s) {
        int st = 0;
        int ed = s.length() - 1;

        while (st < ed) {
            if (!isValid(s[st])) {
                st++;
                continue;
            }
            if (!isValid(s[ed])) {
                ed--;
                continue;
            }

            if (tolower(s[st]) != tolower(s[ed])) {
                return false;
            }

            st++;
            ed--;
        }
        return true;
    }
};