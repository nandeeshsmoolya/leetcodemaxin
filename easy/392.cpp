class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0,count=0;
        for(int i=0; i<t.size(); i++){
            if(s[j]==t[i]){
                count++;
                j++;
            }
        }
        if(count==s.size()) return 1;
        else return 0;
    }
};