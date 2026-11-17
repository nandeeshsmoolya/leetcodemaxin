class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        if(mat[0].size()==1) return mat[0][0];
        int sum=0,j=0;
        for(int i=0; i<mat.size(); i++){
            sum+=mat[i][j];
            j++;
        }
        j--;
        for(int i=0; i<mat.size(); i++){
            sum+=mat[i][j];
            j--;
        }
        if(mat.size()%2==1) {
            sum-=mat[mat.size()/2][mat.size()/2];
        }
        return sum;
    }
};