class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        if(n == 0)
            return 0;

        while(n > 0 && s[n-1] == ' '){
            n--;
        }
        
        int count = 0;
        while(n > 0 && isalpha(s[n-1])){
            count++;
            n--;
        }
        return count;
    }
};