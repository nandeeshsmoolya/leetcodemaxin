class Solution {
public:
    int maxArea(vector<int>& height) {
        int r=height.size()-1, l=0, area=0;
        while(l<r){
            area=max(area,min(height[l], height[r]) * (r - l));
            if(height[l] < height[r]) l++;
            else r--;
        } 
        return area;
    }
};