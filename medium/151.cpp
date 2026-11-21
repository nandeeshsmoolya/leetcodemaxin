class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> temp;
        string word;
        while(ss>>word){
            temp.push_back(word);
        }
        reverse(temp.begin(), temp.end());
        string ans = "";
        for (int i = 0; i < temp.size(); i++) {
             if (i > 0) ans += " ";
             ans += temp[i];
        }
        return ans;
    }
};