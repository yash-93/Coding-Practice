class Solution {
public:
    vector<int> v;
    Solution(vector<int>& w) {
        v.push_back(w[0]);
        for(int i=1;i<w.size();i++){
            v.push_back(v[i-1]+w[i]);
        }
    }

    int pickIndex() {
        auto it = upper_bound(v.begin(),v.end(),rand()%v.back());
        return it-v.begin();
    }
};
