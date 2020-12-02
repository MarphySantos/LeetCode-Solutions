class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int diff = accumulate(B.begin(), B.end(), 0) - accumulate(A.begin(), A.end(), 0);
        diff /= 2;
        unordered_set<int> set;
        for(int i = 0; i < B.size(); i++){
            set.insert(B[i]);
        }
        for(int i = 0; i < A.size(); i++){
            if(set.count(A[i] + diff))
                return {A[i], A[i] + diff};
        }
        return {0, 0};
    }
};
