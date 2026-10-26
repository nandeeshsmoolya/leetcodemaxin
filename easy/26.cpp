class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp=nums[0];
        int k=1;
        int j=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=temp) {
                nums[j]=nums[i];
                j++;
                temp=nums[i];
                k++;
            }
        }
        return k;
    }
};