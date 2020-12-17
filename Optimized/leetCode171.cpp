class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0;
        for(int i = s.size()- 1; i > -1; i--){
            int diff = s[i] - 'A' + 1;
            ans += diff * pow(26, s.size() - i - 1);
        }
        return ans;
    }
};
