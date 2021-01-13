class Solution {
public:
    void recurse(string S, int i, vector<string> &ans){
        while(i < S.size() && !isalpha(S[i])){
            i++;
        }
        if(i == S.size()){
            ans.push_back(S);
            return;
        }
        S[i] = toupper(S[i]);
        recurse(S, i + 1, ans);
        S[i] = tolower(S[i]);
        recurse(S, i + 1, ans);
        
    }
    
    vector<string> letterCasePermutation(string S) {
        vector<string> ans;
        recurse(S, 0, ans);
        return ans;
    }
};
