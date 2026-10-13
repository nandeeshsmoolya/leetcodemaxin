class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheap=prices[0],hp=0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i]<cheap){
                cheap=prices[i];
            }
            if(hp<prices[i]-cheap){
                hp=prices[i]-cheap;
            }
        }
        return hp; 
    }
};