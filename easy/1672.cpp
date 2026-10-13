class Solution {
    int sum=0, temp=0;
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    
        for(int i=0; i<accounts.size(); i++){
            for(int j=0; j<accounts[i].size(); j++){
                sum=sum+accounts[i][j];
                if(sum>temp){
                    temp=sum;
                }
            }
            sum=0;
        }
        return temp;
    }
};