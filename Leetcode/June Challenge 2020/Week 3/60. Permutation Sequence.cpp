class Solution {
public:
    string getPermutation(int n, int k) {
        int dp[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
        
        string res = "";
        vector<int> values;
        for(int i=0; i<=n; i++){
            values.push_back(i);
        }
        
        int temp = n;
        auto it = values.begin();
        
        while(res.length() != n){
            int f = dp[temp];
            int block_size = f/temp;
            int count = 1;
            while(k>block_size){
                k -= block_size;
                count++;
            }
            //cout << values[count];
            res += to_string(values[count]);
            values.erase(it+count);
            temp--;
        }
        return res;
    }
};