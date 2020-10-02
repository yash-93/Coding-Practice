class Solution {
public:
    int numberOfSteps (int num) {
		if(!num) return 0;
        int res = 0;
        while(num) {
            res += (num & 1) ? 2 : 1;
            num >>= 1;
        }
        return res - 1;
    }
    /*int numberOfSteps (int num) {
        int count = 0;
        while(num != 0){
            if(num&1){
                num = num - 1;
            }else{
                num = (num>>1);
            }
            count++;
        }
        return count;
    }*/
};