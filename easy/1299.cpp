class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int temp = -1;

        for(int i = arr.size()-1; i >= 0; i--) {
            int temp1 = arr[i];
            arr[i] = temp;

            if(temp1 > temp) {
                temp = temp1;
            }
        }

        return arr;
    }
};