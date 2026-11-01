class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string temp;
        while(ss>>word){
            reverse(word.begin(),word.end());
            temp+=word;
            if(ss.peek() != EOF) temp += ' ';
        }
        return temp;
    }
};