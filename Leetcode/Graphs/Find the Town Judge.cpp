#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

int main()
{
    int V = 4;
    vector<vector<int> > trust{{1,3},{1,4},{2,3},{2,4},{4,3}};
    vector<int> adj[V+1];

    for(int i=0; i<trust.size(); i++){
        adj[trust[i][0]].push_back(trust[i][1]);
    }

    /*for(int i=1; i<=V; i++){
        cout << i << " : ";
        for(int j=0; j<adj[i].size(); j++){
            cout << adj[i][j] << "->";
        }
        cout << endl;
    }*/

    int poss_TJ, countt = 0;
    for(int i=1; i<=V; i++){
        if(adj[i].size()==0){
            poss_TJ = i;
            countt += 1;
        }
    }

    bool flag = true;

    if(countt!=1)
    {
        cout << "-1" << endl;
    }else
    {
        for(int i=1; i<=V; i++){
            if(i!=poss_TJ){
                for(int j=0; j<adj[i].size(); j++){
                    if(adj[i][j]==poss_TJ){
                        break;
                    }else if(j==adj[i].size()-1 && adj[i][j]!=poss_TJ){
                        flag = false;
                    }
                }
                if(!flag){
                    break;
                }
            }
        }
        if(flag)
            cout << poss_TJ << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}
