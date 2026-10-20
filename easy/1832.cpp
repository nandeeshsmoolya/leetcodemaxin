class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> set1;
        string sen1=sentence;
        string sen2="abcdefghijklmnopqrstuvwxyz";
        set1.insert(sen1.begin(),sen1.end());
        for(int i=0; i<sen2.size(); i++){
            if(set1.find(sen2[i])!=set1.end()) continue;
            else return false;
        }
        return true;
    }
};
/*

class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> ans;
        for(char c:sentence)
        {
            ans.insert(c);
        }
        return ans.size()==26;
    }
};

*/