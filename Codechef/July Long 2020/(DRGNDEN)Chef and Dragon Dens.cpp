#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n,q; cin >> n >> q;
    vector<int> h(n);
    for(int i=0; i<n; i++){
        cin >> h[i];
    }
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int x,y,z;
    ll res;
    for(int i=0; i<q; i++){
        res = 0;
        cin >> x >> y >> z;
        if(x==1){
            a[--y] = z;
        }else{
            y--; z--;
            if(y==z){
                cout << a[y] << "\n";
            }else if(h[y]<=h[z]){
                cout << -1 << "\n";
            }else{
                int max = h[y];
                int prev = h[z];
                if(y>z){
                    for(int j=z+1; j<y; j++){
                        if(h[j] >= max){
                            res = -1;break;
                        }else if(h[j] > prev){
                            prev = h[j]; res += a[j];
                        }
                    }
                    if(res != -1)
                        res += (a[y] + a[z]);
                    cout << res << "\n";
                }else if(y<z){
                    for(int j=z-1; j>y; j--){
                        if(h[j] >= max){
                            res = -1;break;
                        }else if(h[j] > prev){
                            prev = h[j]; res += a[j];
                        }
                    }
                    if(res != -1)
                        res += (a[y] + a[z]);
                    cout << res << "\n";
                }
            }
        }
    }

    return 0;
}
