class Solution {
public:
    int titleToNumber(string s) {
        int sum = 0;
        int len = s.size() - 1;
        for(int i=0; i<=len; i++){
            sum += pow(26,i) * (s[len-i] - 'A' + 1);
        }
        
        return sum;
    }
};