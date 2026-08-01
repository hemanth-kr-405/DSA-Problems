class Solution {
public:
    int value(char c){
        if(c == 'I') return 1;
        if(c == 'V') return 5;
        if(c == 'X') return 10;
        if(c == 'L') return 50;
        if(c == 'C') return 100;
        if(c == 'D') return 500;
        if(c == 'M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int n = s.length();
        int ans = 0;

        for(int i=0; i<n; i++){
            int cur = value(s[i]);
            int next = 0;

            if(i+1 < n){
                next = value(s[i+1]);
            }

            if(cur < next){
                ans -= cur;
            }else{
                ans += cur;
            }
        }
        return ans;
    }
};