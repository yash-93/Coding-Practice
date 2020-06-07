class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        int diff=0;
        for(int i=0; i<len/2; i++){
            diff = s[i] - s[len-1-i];
            if(diff < 0){
                s[i] = s[i] + abs(diff);
                s[len-1-i] = s[len-1-i] - abs(diff);
            }else{
                s[i] = s[i] - abs(diff);
                s[len-1-i] = s[len-1-i] + abs(diff);
            }
        }
    }
};
