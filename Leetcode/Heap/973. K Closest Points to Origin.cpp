class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        priority_queue<pair<int, pair<int,int>>> maxH;
        int size = points.size();
        
        for(auto point:points){
            maxH.push({point[0]*point[0] + point[1]*point[1],{point[0], point[1]}});
            if(maxH.size() > K)
                maxH.pop();
        }
        
        vector<vector<int>> res;
        
        while(maxH.size() > 0){
            res.push_back(vector<int> {maxH.top().second.first,maxH.top().second.second});
            maxH.pop();
        }
        
        return res;
        
    }
};