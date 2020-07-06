#include <bits/stdc++.h>
using namespace std;

/*void test(){
    int n; cin >> n;
    vector<pair<int,int>> vertices;
    int u,v;
    map<int, vector<int>> pts;
    for(int i=0; i<(4*n)-1; i++){
        cin >> u >> v;
        vertices.push_back(make_pair(u,v));
        pts[u].push_back(v);
    }

    for(auto it=pts.begin(); it!=pts.end(); it++){
        cout << it->first << " : ";
        for(auto itr=it->second.begin(); itr!=it->second.end(); itr++){
            cout << *itr << " ";
        }
        cout << endl;
    }

    int i = 1;
    int x_cord = 0, y_cord = 0;
    map<int, vector<int>>::iterator it, temp;
    for(it=pts.begin(); it!=pts.end(); it++){
        if(it->second.size()%2==1){
            x_cord = it->first;
            break;
        }
        i++;
    }

    if(i%2==0){
        vector<int> b(it->second.begin(),it->second.end());
        temp = --it;
        vector<int> a(temp->second.begin(),temp->second.end());

        for(int test=0; test<b.size(); test++){
            if(a[test] != b[test]){
                y_cord = a[test];
                break;
            }else if(test == b.size()-1){
                y_cord = a[test+1];
            }
        }
    }
    else
    {
        vector<int> a(it->second.begin(),it->second.end());
        temp = ++it;
        vector<int> b(temp->second.begin(),temp->second.end());

        for(int test=0; test<a.size(); test++){
            if(b[test] != a[test]){
                y_cord = b[test];
                break;
            }else if(test == a.size()-1){
                y_cord = b[test+1];
            }
        }
    }
    cout << x_cord << " " << y_cord << endl;
}*/

void test(){
    int n; cin >> n;
    set<int> a,b;
    int u,v;

    for(int i=0; i<(4*n)-1; i++){
        cin >> u >> v;
        if(a.find(u) == a.end()){
            a.insert(u);
        }else{
            a.erase(u);
        }

        if(b.find(v) == b.end()){
            b.insert(v);
        }else{
            b.erase(v);
        }
    }
    cout << *a.begin();
    cout << " ";
    cout << *b.begin() << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();

    return 0;
}
