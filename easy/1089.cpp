class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zero = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) zero++;
        }
        int i = n - 1;
        int j = n + zero - 1;
        while(i < j) {
            if(j < n)
                arr[j] = arr[i];
            if(arr[i] == 0) {
                j--;
                if(j < n)
                    arr[j] = 0;
            }
            i--;
            j--;
        }
    }
};