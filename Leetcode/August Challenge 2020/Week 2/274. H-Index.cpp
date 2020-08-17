class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());
        int len = citations.size();
        int i=1;
        while(i<=len){
            if(citations[i-1] < i) break;
            i++;
        }
        return --i;
    }
};