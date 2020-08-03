#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define mod 1000000007

vector<long long> performOperations(long long N, vector<long long> op) {
    vector<long long> res;
    unordered_set<long long> s;
    for(long long i=1; i<=N; i++) s.insert(i);

    long long first = 1;
    long long last = N;
    long long sum = (N*(N+1))/2;

    for(auto it:op){
        if(s.find(it) == s.end()){
            sum -=  last;
            sum += it;
            s.erase(last);
            s.insert(it);
            last = it;
            res.push_back(sum);
        }else{
            long long temp = first;
            first = last;
            last = temp;
            res.push_back(sum);
        }
    }
    return res;
}

int main(){
    long long n,m;
    cin >> n >> m;
    vector<long long> op(m);
    for(long long i=0; i<m; i++)
        cin >> op[i];

    vector<long long> res;
    res = performOperations(n, op);
    for(auto it:res)
        cout << it << "\n";

    return 0;
}
