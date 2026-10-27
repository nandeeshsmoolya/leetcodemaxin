class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> lastindex;
        for(int i=0; i<nums.size(); i++){
            if(lastindex.count(nums[i])){
                if(i-lastindex[nums[i]]<=k) return 1;
            }
            lastindex[nums[i]]=i;
        }
        return 0;
    }
};