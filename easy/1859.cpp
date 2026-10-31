
class Solution {
public:
    string sortSentence(string s) {
        string temp[200];
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                temp[j] += s[i];
            } else {
                j++;
            }
        }

        string result[200];
        for (int i = 0; i <= j; i++) {
            int pos = temp[i].back() - '0';
            temp[i].pop_back();

            result[pos - 1] = temp[i];
        }

        string ans = "";
        for (int i = 0; i <= j; i++) {
            if (i > 0) {
                ans += " ";
            }
            ans += result[i];
        }

        return ans;
    }
};
