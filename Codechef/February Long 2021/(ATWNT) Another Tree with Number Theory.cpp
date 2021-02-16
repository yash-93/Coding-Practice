#include <bits/stdc++.h>
using namespace std;

int solve(int tasks, int &remainTasks, int node, map<int,vector<int>> tree){
    int tempTasks = 0;
    if(!tree[node].size())
        return 0;
    if(tasks == 0)
        return 0;
    if(tasks%tree[node].size()!=0){
        return tasks;
    }
    for(auto i:tree[node]){
        tempTasks += solve(tasks/tree[node].size(), remainTasks, i, tree);
    }
    return remainTasks += tempTasks;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    vector<int> p(n-1);
    map<int,vector<int>> tree;
    for(int i=0; i<n-1; i++){
        cin >> p[i];
        tree[p[i]].push_back(i+2);
    }

    int q; cin >> q;
    for(int i=0; i<q; i++){
        int node, tasks; cin >> node >> tasks;
        int remainTasks = 0;
        cout << solve(tasks,remainTasks,node,tree) << endl;
    }
    return 0;
}

