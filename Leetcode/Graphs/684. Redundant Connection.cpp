class Solution {
public:
    int find(vector<int> &v,int x)
    {
        if(v[x]==x)
            return x;
        else
             return find(v,v[x]);
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> v(edges.size()+1);
        vector<int> ans;
        int p1=0,p2=0;
        for(int i=0;i<=edges.size();i++)
        {
            v[i]=i;
        }
        for(int i=0;i<edges.size();i++)
        {
            int x = find(v,edges[i][0]);
            int y = find(v,edges[i][1]);
            if(x!=y)
                v[x]=y;
            else
            {
                p1=edges[i][0];
                p2=edges[i][1];
            }
        }
        ans.push_back(p1);
        ans.push_back(p2);
        return ans;
    }
};