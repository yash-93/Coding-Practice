class Solution {
public:
    vector<bool> visited;
    vector<int> connected;
    
    void DFS(vector<vector<int>>& rooms, int u){
        visited[u] = true;
        connected.push_back(u);

        for (auto it = rooms[u].begin(); it!=rooms[u].end(); it++)
        {
            if(!visited[*it])
                DFS(rooms, *it);
        }   
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        visited.assign(rooms.size(), false);
        bool res;
        
        DFS(rooms, 0);
        
        return connected.size() == rooms.size();
    }
};