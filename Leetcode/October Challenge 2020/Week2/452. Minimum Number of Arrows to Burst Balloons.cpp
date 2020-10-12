class Solution {
private:
    static bool comp(vector<int> &a, vector<int> &b){
        if(a[0] < b[0])
            return true;
        else if(a[0] == b[0] && a[1] < b[1])
            return true;
        return false;
    }

public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        if(n == 0)
            return 0;
        
        sort(points.begin(), points.end(), comp);
        
        int count = 1;
        
        int lastMax = points[0][1];
        
        for(int pt=1; pt<n; pt++){
            if(points[pt][0] > lastMax){
                count++;
                lastMax = points[pt][1];
                continue;
            }
            if(points[pt][1] < lastMax)
                lastMax = points[pt][1];
        }
        
        return count;
    }
};