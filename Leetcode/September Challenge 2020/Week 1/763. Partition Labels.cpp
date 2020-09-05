class Solution {
public:
    vector<int> partitionLabels(string s) {
        char find;
        vector<int> res;
        int n = s.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            int j = i;
            find = s[i];
            set<char> mustHave, notMust;
            while(j<n){
                if(s[j] == find || mustHave.count(s[j])){
                    i = j;
                    mustHave.insert(notMust.begin(), notMust.end());
                    notMust.clear();
                }
                else{
                    notMust.insert(s[j]);
                }
                j++;
            }
            if(res.empty()){
                res.push_back(i+1);
                sum += i+1;
            }
            else{
                res.push_back(i - sum + 1);
                sum += i - sum + 1;
            }
        }
        return res;
    }
};