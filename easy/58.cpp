class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<int> temp;
        stringstream ss(s);
        string word;
        while(ss>>word){
            temp.push_back(word.size());
        }
        return temp[temp.size()-1];
    }
};