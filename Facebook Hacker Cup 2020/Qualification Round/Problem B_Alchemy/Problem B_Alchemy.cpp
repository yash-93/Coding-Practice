#include <bits/stdc++.h>
using namespace std;

void test(int t){
    int n; cin >> n;
    string s; cin >> s;
    unordered_map<char,int> m({{'A',0},
                              {'B',0}});

    for(int i=0; i<n; i++){
        m[s[i]] += 1;
    }

    if(abs(m['A'] - m['B']) == 1)
        cout << "Case #" << t << ": " << "Y\n";
    else
        cout << "Case #" << t << ": " << "N\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("alchemy_input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
    int t, val=0; cin >> t;
    while(val<t){
        test(val+1);
        val++;
    }
    return 0;
}
