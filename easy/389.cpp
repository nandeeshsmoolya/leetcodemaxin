class Solution {
public:
    char findTheDifference(string s, string t) {
        int temp1 = 0, temp2 = 0;

        for (int i = 0; i < s.size(); i++) {
            temp1 ^= s[i];
        }

        for (int i = 0; i < t.size(); i++) {
            temp2 ^= t[i];
        }

        return temp1 ^ temp2;
    }
};
