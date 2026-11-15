class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even,odd,temp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0) even.push_back(nums[i]);

            else odd.push_back(nums[i]);
        }
        int j=0;
        while(j!=nums.size()/2){
            temp.push_back(even[j]);
            temp.push_back(odd[j]);
            j++;
        }
        return temp;
    }
};