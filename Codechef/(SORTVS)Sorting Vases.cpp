#include <bits/stdc++.h>
using namespace std;

void test(){
    int N, M, *p;
    cin >> N >> M;
    p = new int[N];
    for (int i=0; i<N; i++)
        cin >> p[i];

    vector<pair<int,int> > robot(M);
    int f,s;
    for (int i=0; i<M; i++){
        cin >> f >> s;
        robot[i].first = f-1;
        robot[i].second = s-1;
    }

    vector<pair<int,int> > val_index(N);

    for(int i=0;i<N;i++)
    {
        val_index[i].first=p[i];
        val_index[i].second=i;
    }

    sort(val_index.begin(), val_index.end());

    int time=0;
    int time_to_deduct = 0;
    for (int i=0; i<N; i++){
        if (i==val_index[i].second){
            continue;
        }
        else{
            /*for(int i=0; i<M; i++){
                if (val_index[i].second==robot[i].first && val_index[val_index[i].second].second==robot[i].second ||
                    val_index[i].second==robot[i].second && val_index[val_index[i].second].second==robot[i].first){
                    time_to_deduct++;
                    break;
                }
            }*/
            cout << val_index[i].second << " " << val_index[val_index[i].second].second << endl;
            swap(val_index[i].second, val_index[val_index[i].second].second);
            swap(val_index[i].first, val_index[val_index[i].second].first);
        }

        if(i!=val_index[i].second)
            i--;

        time++;
    }

    cout << time - time_to_deduct << endl;

}

int main(){
    int T; cin >> T;
    while(T--)
        test();
    return 0;
}
