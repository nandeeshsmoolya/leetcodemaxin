class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        if (needle.size() > haystack.size()) return -1;
        for(int i = 0; i <= haystack.size() - needle.size(); i++) {
            bool found = true;
            for(int j = 0; j < needle.size(); j++) {
                if(haystack[i+j] != needle[j]) {
                    found = false;
                    break;
                }
            }
            if(found)
                return i;
        }
        return -1;
    }
};