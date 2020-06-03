#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& arr) {
        vector<pair<int,int>> v;
        int n =arr.size();
        int ans=0;
        for(int i=0;i<n;i++)
            v.push_back({arr[i][0]-arr[i][1],i});
        sort(v.begin(),v.end());
        for(int i=0;i<n/2;i++)
            ans+=arr[v[i].second][0];
        for(int i=n/2;i<n;i++)
            ans+=arr[v[i].second][1];
        return ans;
};

int main(){
    vector<vector<int>> costs = {{10,20},{200,30},{400,50},{30,20}};
    Solution s;
    cout << s.twoCitySchedCost(costs);
    return 0;
}
