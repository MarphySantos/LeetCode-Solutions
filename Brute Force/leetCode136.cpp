class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int, int> counter;
        for(int i = 0; i < len; i++){
            if(counter[nums[i]] == 0)
                counter[nums[i]]++;
            else
                counter[nums[i]]--;
        }
        unordered_map<int,int>::iterator it;
        for(it = counter.begin(); it != counter.end(); it++)
            if(it->second == 1){
                return it->first;
            }
        return -1;
    }
};
