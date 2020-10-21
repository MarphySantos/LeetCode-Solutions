class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        //brute force approach
        int len = nums.size();
        int curr, counter;
        vector<int> ans;
        for(int i = 0; i < len; i++){
            curr = nums[i];
            counter = 0;
            for(int j = 0; j < len; j++){
                if(i == j){
                    continue;
                }
                if(nums[j] < curr)
                    counter++;
            }
            ans.push_back(counter);
        }
        return ans;
    }
};
