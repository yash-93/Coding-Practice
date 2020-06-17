class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        unordered_map<int, vector<pair<int,int>>> g;
        for (const auto& e : flights){
            g[e[0]].emplace_back(e[1], e[2]);
        }     
        int ans = INT_MAX;
        queue<pair<int,int>> q;q.push({src,0}); 
        int steps =0; 
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; ++i){
             auto curr=q.front();q.pop();
            if(curr.first == dst) 
                ans = min(ans, curr.second);   
            for(auto x:  g[curr.first]){             
               if( curr.second + x.second > ans) 
                   continue;
                q.push({x.first,curr.second + x.second });
             }  
            }
          if(steps++ > K) break;
        }
        
        return ans == INT_MAX ? - 1 : ans;
    }
};