class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int next = 0, count = 0, i;
        for(i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[next] = nums[i];
                next += 1;
            }
        }
        for(int i = next; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};
