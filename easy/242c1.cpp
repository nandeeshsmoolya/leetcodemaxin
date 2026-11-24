class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char, int> st1, st2;
        for(int i=0; i<s.size(); i++){
            st1[s[i]]++;
            st2[t[i]]++;
        }
         return st2==st1;
    }
};