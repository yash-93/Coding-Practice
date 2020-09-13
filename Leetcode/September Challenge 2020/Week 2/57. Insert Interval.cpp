class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(intervals.size() == 0){
            intervals.push_back(newInterval);
            return intervals;
        }
        
        vector<vector<int>> res;
        
        int size = intervals.size();
        int i = 0;
        int first,last;
        
        while(i<size && intervals[i][1] < newInterval[0]){
            res.push_back(intervals[i]);
            i++;
        }
        
        first = newInterval[0];
        last = newInterval[1];
        
        while(i<size && intervals[i][0] <= newInterval[1]){
            first = min(intervals[i][0], first);
            last = max(intervals[i][1], last);
            i++;
        }
        
        res.push_back(vector<int> {first,last});
        
        while(i<size){
            res.push_back(intervals[i]);
            i++;
        }
        
        return res;
    }
};