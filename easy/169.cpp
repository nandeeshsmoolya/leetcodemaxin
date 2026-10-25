class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int can=0, count=0;
        for(int i=0; i<nums.size(); i++){
            if(count==0) can=nums[i];
            if(nums[i]==can) count++;
            else count--;
        }
        return can;
    }
};