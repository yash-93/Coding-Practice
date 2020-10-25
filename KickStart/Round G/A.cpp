#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test(int t){
    string s;
    cin >> s;
    int n = s.size();
    queue<int> qk;
    queue<int> qs;
    for(int i=0; i<n; i++){
        if(s[i] == 'K')
            qk.push(i);
        else if(s[i] == 'S')
            qs.push(i);
    }

    vector<int> vk;
    vector<int> vs;

    while(!qk.empty()){
        int cur = qk.front();
        if(s.substr(cur,4) == "KICK")
            vk.push_back(cur);
        qk.pop();
    }

    while(!qs.empty()){
        int cur = qs.front();
        if(s.substr(cur,5) == "START")
            vs.push_back(cur);
        qs.pop();
    }

    int res = 0;

    for(auto i:vk){
        auto it = upper_bound(vs.begin(), vs.end(), i);
        int count = 0;
        if(it != vs.end()){
            count = vs.end() - it;
        }
        res += count;
    }

    cout << "Case #" << t << ": " << res << "\n";
}

int main(){
    int t; cin >> t;

    for(int i=0; i<t; i++)
        test(i+1);

    return 0;
}
