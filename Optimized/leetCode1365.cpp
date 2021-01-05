class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        //optimized approach
        int len = nums.size();
        vector<int> ans;
        int counter[101];
        for(int i = 0; i < 101; i++)
            counter[i] = 0;
        for(int i = 0; i < len; i++)
            counter[nums[i]]++;
        for(int i = 1; i < 101; i++)
            counter[i] += counter[i-1];
        for(int i = 0; i < len; i++){
            if(nums[i] == 0)
                ans.push_back(0);
            else
                ans.push_back(counter[nums[i] - 1]);
        }
        return ans;
    }
};
