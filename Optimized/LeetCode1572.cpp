class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        //Optimized
        int len = mat.size();
        int counter = 0;
        for(int i = 0; i < len; i++){
          counter += mat[i][i] + mat[i][len-1-i];
        }
        if(len%2 == 1)
          return counter - mat[len/2][len/2];
        return counter;
    }
};
