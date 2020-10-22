class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        //First Try
        int len = mat.size();
        int counter = 0;
        for(int i = 0; i < len; i++){
            if(i == len/2 && len%2 == 1){
                counter += mat[i][i];
            }
            else{
                counter += mat[i][i] + mat[i][len-1-i];
            }
        }
        return counter;
    }
};
