class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        vector<int> array;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0) array.push_back(nums[i]);
            else count++;
        }
        for(int i=0;i<count; i++){
            array.push_back(0);
        }
        nums=array;
    }
};