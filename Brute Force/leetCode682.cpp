//Brute Force Solution
class Solution {
public:
    int calPoints(vector<string>& ops) {
        int counter = 0;
        int scoreSize = 0;
        vector<int> prev;
        int len = ops.size();
        for(int i = 0; i < len; i++){
            if(ops[i] == "+"){
                prev.push_back(prev.back() + prev[scoreSize - 2]);
                scoreSize++;
                counter += prev.back();
            }
            else if(ops[i] == "D"){
                prev.push_back(prev.back() * 2);
                scoreSize++;
                counter += prev.back();
            }
            else if(ops[i] == "C"){
                counter -= prev.back();
                scoreSize--;
                prev.pop_back();
            }
            else{
                prev.push_back(stoi(ops[i]));
                scoreSize++;
                counter += prev.back();
            }
        }
        return counter;
    }
                          
};
