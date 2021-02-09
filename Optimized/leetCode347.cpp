class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int i = 0; i < nums.size(); i++)
            count[nums[i]]++;
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(unordered_map<int, int>:: iterator itr = count.begin(); itr != count.end(); itr++){
            pq.push(make_pair(itr->second, itr->first));
            if(pq.size() > count.size() - k){
                ans.push_back(pq.top().second);
                pq.pop();
            }
        }
        return ans;
    }
};
