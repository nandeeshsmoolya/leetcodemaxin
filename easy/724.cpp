class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> sumr(nums.size()), suml(nums.size()); int temp1=0,temp2=0;
        for(int i=0; i<nums.size(); i++){
            temp1=temp1+nums[i];
            suml[i]=temp1;
        }
        for(int i=nums.size()-1; i>=0; i--){
            temp2=temp2+nums[i];
            sumr[i]=temp2;
        }
        for(int i=0; i<nums.size(); i++){
            if(sumr[i]==suml[i]){
                return i;
            }
        }
        return -1;
    }
};