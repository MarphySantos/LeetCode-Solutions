class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        int answer = 0;
        for(int i = 0; i < len; i++)
            answer ^= nums[i];
        return answer;
    }
};
