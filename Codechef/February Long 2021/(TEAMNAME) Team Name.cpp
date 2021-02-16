#include <bits/stdc++.h>
using namespace std;

#define max_size 1000005
#define ll long long

int different(vector<char> f, vector<char> s){
    int count = 0;
    map<char,int> m;
    for(auto i:f){
        if(!m[i]){
            count++;
            m[i] = 1;
        }
    }
    for(auto i:s){
        if(!m[i]){
            count++;
            m[i] = 1;
        }
    }
    return count;
}

void test(){
    int n;
    cin >> n;

    vector<string> s;
    map<string,vector<char>> funny;
    vector<string> secondary;

    string temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        string body = temp.substr(1);
        funny[body].push_back(temp[0]);
    }

    for(auto it=funny.begin(); it!=funny.end(); it++) secondary.push_back(it->first);

    int res = 0;

    for(int i=0; i<secondary.size(); i++){
        for(int j=i+1; j<secondary.size(); j++){
            int temp2 = different(funny[secondary[i]], funny[secondary[j]]);
            res += temp2*temp2 - temp2*funny[secondary[i]].size() - funny[secondary[j]].size()*temp2 + funny[secondary[i]].size()*funny[secondary[j]].size();
        }
    }
    res += res;
    /*for(auto it=funny.begin(); it!=funny.end(); it++){
        auto itr = it;
        itr++;
        for(auto it1:it->second){
            for(auto nit=itr; nit!=funny.end(); nit++){
                for(auto nit1:nit->second){
                    string fWord = it1;
                    string sWord = nit1;
                    swap(fWord[0],sWord[0]);
                    if(!secondary[fWord] && !secondary[sWord]){
                        res += 2;
                    }
                }
            }
        }
    }*/

    //Print map
    /*for(auto it=funny.begin(); it!=funny.end(); it++){
        cout << it->first << " => ";
        for(auto vec:it->second){
            cout << vec << " ";
        }
        cout << endl;
    }*/

    /*
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            string fWord = s[i];
            string sWord = s[j];
            swap(fWord[0], sWord[0]);
            if(!funny[fWord] && !funny[sWord]){
                res += 2;
            }
        }
    }
    */
    cout << res << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
        test();
    return 0;
}
