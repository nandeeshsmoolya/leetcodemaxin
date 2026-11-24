class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> freq1;
        for(int i=0; i<magazine.size(); i++){
            freq1[magazine[i]]++;
        }
        for(int i=0; i<ransomNote.size(); i++){
            if(freq1.find(ransomNote[i])==freq1.end() || freq1[ransomNote[i]]==0) return false;
            freq1[ransomNote[i]]--;
        }
        return true;
    }
};