#include <bits/stdc++.h>
using namespace std;

void test(){
    long long int N, val, winning_fights = 0;
    cin >> N;
    vector<long long int> team_G, team_O;
    for(int i=0; i<N; i++){
        cin >> val;
        team_G.push_back(val);
    }

    for(int i=0; i<N; i++){
        cin >> val;
        team_O.push_back(val);
    }
    sort(team_G.begin(), team_G.end());
    sort(team_O.begin(), team_O.end());

    for (auto it = team_G.begin(); it != team_G.end(); ++it){
        cout << *it <<" ";
    }
    cout << endl;
    for (auto it = team_O.begin(); it != team_O.end(); ++it){
        cout << *it <<" ";
    }

    for (auto it = team_O.begin(); it != team_O.end(); ++it)
    {
        auto itr = upper_bound(team_G.begin(), team_G.end(), *it);

        if(distance(team_G.begin(), itr) == distance(team_G.begin(), --team_G.end()))
        {
            team_G.erase(itr);
            winning_fights++;
            break;
        }
        else
        {
            team_G.erase(itr);
            winning_fights++;
        }

    }

    cout << winning_fights << endl;
}

int main(){
    int T; cin >> T;
    while(T--)
        test();
    return 0;
}
