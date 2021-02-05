#include <bits/stdc++.h>
using namespace std;

void test(){
    int px, py; cin >> px >> py;
    string orders(""); cin >> orders;

    if(px == 0 && py == 0){
        cout << "YES\n";
        return;
    }

    map<char,int> moves;

    for(auto order:orders)
        moves[order] += 1;

    if(px > 0 && py > 0){
        if(moves['R'] >= px && moves['U'] >= py) cout << "YES\n";
        else cout << "NO\n";
    }
    else if(px > 0 && py < 0){
        if(moves['R'] >= px && moves['D'] >= abs(py)) cout << "YES\n";
        else cout << "NO\n";
    }
    else if(px < 0 && py < 0){
        if(moves['L'] >= abs(px) && moves['D'] >= abs(py)) cout << "YES\n";
        else cout << "NO\n";
    }
    else if(px < 0 && py > 0){
        if(moves['L'] >= abs(px) && moves['U'] >= py) cout << "YES\n";
        else cout << "NO\n";
    }
    else if(px == 0 && py > 0){
        if(moves['U'] >= py) cout << "YES\n";
        else cout << "NO\n";
    }
    else if(px == 0 && py < 0){
        if(moves['D'] >= abs(py)) cout << "YES\n";
        else cout << "NO\n";
    }
    else if(px > 0 && py == 0){
        if(moves['R'] >= px) cout << "YES\n";
        else cout << "NO\n";
    }
    else if(px < 0 && py == 0){
        if(moves['L'] >= abs(px)) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
        test();
    return 0;
}
