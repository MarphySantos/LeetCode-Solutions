class Solution {
public:
    int romanToInt(string s) {
        int arr[26] = {0}, ans = 0;
        arr['I' - 'A'] = 1;
        arr['V' - 'A'] = 5;
        arr['X' - 'A'] = 10;
        arr['L' - 'A'] = 50;
        arr['C' - 'A'] = 100;
        arr['D' - 'A'] = 500;
        arr['M' - 'A'] = 1000;
        char holder = 'A';
        for(int i = s.size()-1; i > -1; i--){
            if(arr[holder - 'A'] > arr[s[i] - 'A'])
                ans -= arr[s[i] - 'A'];
            else
                ans += arr[s[i] - 'A'];
            holder = s[i];
        }
        return ans;
    }
};
