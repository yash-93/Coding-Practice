#include <bits/stdc++.h>
using namespace std;

void bfs(map<int, vector<int>> adj_list, int src, vector<int> &d, int &sum){
    queue<int> q;
    q.push(src);
    int temp;

    while(!q.empty()){
        temp = q.front();
        q.pop();
        for(auto it=adj_list[temp].begin(); it!=adj_list[temp].end(); it++){
            if(d[*it] == -1){
                q.push(*it);
                int maxx = *max_element(d.begin()+1,d.begin()+(*it-1));
                if( d[temp]+1 >= maxx ){
                    if(*it == d.size()-1){
                        d[*it] = d[temp]+1;
                        sum += d[*it];
                        break;
                    }
                    if(d[*it+1] != -1){
                        if(d[temp]+1 <= d[*it+1]){
                            d[*it] = d[temp]+1;
                            sum += d[*it];
                        }else{
                            d[*it] = d[temp];
                            sum += d[*it];
                        }
                    }else{
                        int ind = *it+1;
                        while(d[ind] == -1){
                            ind++;
                            if(ind==d.size()){ind--; break;}
                        }
                        if(d[ind] == -1){
                            d[*it] = d[temp]+1;
                            sum += d[*it];
                        }else
                        if(d[temp]+1 <= d[ind]){
                            d[*it] = d[temp]+1;
                            sum += d[*it];
                        }else{
                            d[*it] = d[temp];
                            sum += d[*it];
                        }
                    }
                }else{
                    d[*it] = d[temp];
                    sum += d[*it];
                }
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    map<int, vector<int>> adj_list;
    int u,v;
    for(int i=0; i<m; i++){
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    vector<int> d;
    d.assign(n+1, -1);

    d[1] = 0;
    int sum = 0;

    bfs(adj_list,1,d,sum);
    cout << sum << endl;


    return 0;
}
