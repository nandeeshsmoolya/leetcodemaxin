class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> array;
        for(int i=0; i<nums.size(); i++){
           /* for(int j=0; j<=i; j++){
                sum=sum+nums[j];
            }*/
            sum=sum+nums[i];
            array.push_back(sum);
        }
        return array;
    }
};