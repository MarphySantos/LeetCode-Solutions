class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int len = text.size();
        unordered_map<char, double> count;
        for(int i = 0; i < len; i++){
            if(text[i] == 'o' || text[i] == 'l'){
                count[text[i]] += 0.5;
            }
            else if(text[i] == 'b' || text[i] == 'a' || text[i] == 'n')
                count[text[i]] += 1;
        }
        unordered_map<char, double>::iterator it;
        int ans;
        if(count.size() == 5){
            ans = 99999999;
        }
        else
            return 0;
        for(it = count.begin(); it != count.end(); it++){
            ans = min(ans, (int) floor(it->second));
        }
        return ans;
    }
};
