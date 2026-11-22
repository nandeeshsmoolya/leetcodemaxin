class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string temp;

        int n=max(word1.length(), word2.length());

        for(int i=0; i<n; i++){

            if(i<word1.length()){
                temp+=word1[i];
            }

            if(i<word2.length()){
                temp+=word2[i];
            }
        }
        return temp;
    }
};