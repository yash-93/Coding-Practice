class Solution {
private:
    int getBits(int n){
        int cnt = 0;

        while(n!=0){
            int rsbm = n & -n;
            n -= rsbm;
            cnt++;
        }

        return cnt;
    }
    
public:
    vector<int> countBits(int num) {
        vector<int> res;
        for(int i=0; i<=num; i++){
            res.push_back(getBits(i));
        }
        return res;
    }
};