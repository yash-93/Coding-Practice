class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxH;
        int n = stones.size();
        for(int i=0; i<n; i++)
            maxH.push(stones[i]);
        
        int x,y;
        while(n>1){
            x = maxH.top();
            maxH.pop();
            y = maxH.top();
            maxH.pop();
            n -= 2;
            if(x>y){
                maxH.push(x-y);
                n += 1;
            }
        }
        if(maxH.empty())
            return 0;
        return maxH.top();
    }
};