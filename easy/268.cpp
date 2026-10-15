class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int temp1=0,temp2=0;
        vector<int> array;
        for(int i=0; i<nums.size(); i++){
            temp1^=nums[i];
        }
        for(int i=0; i<=nums.size(); i++){
            temp2^=i;
        }
        return temp1^temp2;
        
    }
};