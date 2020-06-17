class DSU {
    int *parent;
public:
    DSU(int N) {
        parent = new int[N];
        for (int i = 0; i < N; ++i)
            parent[i] = i;
    }
    
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    
    void unionn(int x, int y) {
        parent[find(x)] = find(y);
    }
};

class Solution {
public:
    int regionsBySlashes(vector<string>& grid) {
        int N = grid.size();
        DSU dsu(4*N*N);
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                int root = 4*(i*N+j);
                char val = grid[i].at(j);
                if (val != '\\') {
                    dsu.unionn(root + 0, root + 1);
                    dsu.unionn(root + 2, root + 3);
                }
                if (val != '/') {
                    dsu.unionn(root + 0, root + 2);
                    dsu.unionn(root + 1, root + 3);
                }
                
                if(i+1 < N){
                    dsu.unionn(root+3, (root+4*N)+0);
                }
                if(i-1 >= 0){
                    dsu.unionn(root+0, (root-4*N)+3);
                }
                if(j+1 < N){
                    dsu.unionn(root+2, (root+4)+1);
                }
                if(j-1 >= 0){
                    dsu.unionn(root+1, (root-4)+2);
                }
            }
        }
        int ans = 0;
        for(int x=0; x<4*N*N; x++){
            if(dsu.find(x) == x)
                ans++;
        }
        return ans;
    }
};