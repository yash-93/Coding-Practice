class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> nonOverlapIntervals;
        if(intervals.size() == 0)
            return nonOverlapIntervals;
        
        sort(intervals.begin(), intervals.end());
        vector<int> temp = intervals[0];
        
        for(auto it : intervals){
            if(it[0] <= temp[1])
                temp[1] = max(it[1],temp[1]);
            else{
                nonOverlapIntervals.push_back(temp);
                temp = it;
            }
        }
        
        nonOverlapIntervals.push_back(temp);
        return nonOverlapIntervals;
    }
};