class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> bools;
        int large=0;
        for(int i=0; i<candies.size(); i++){
            if(candies[i]>large){
                large=candies[i];
            }
        }
        for(int i=0; i<candies.size(); i++){
            if((candies[i]+extraCandies)>=large){
                bools.push_back(1);
            }
            else bools.push_back(0);
        }
        return bools;
    }
};