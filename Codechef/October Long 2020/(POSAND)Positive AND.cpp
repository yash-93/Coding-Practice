#include<bits/stdc++.h>
using namespace std;

void test(){
    int n; cin >> n;

    if(n==1)
        cout << 1 << "\n";
    else if(fmod(log10(n)/log10(2),1) == 0)
        cout << -1 << "\n";
    else{
        vector<int> a(n);
        cout << 2 << " " << 3 << " " << 1 << " ";

        for(int i=4; i<=n; i++){
            if(fmod(log10(i)/log10(2),1) == 0){
                cout << i+1 << " " << i << " ";
                i++;
            }else{
                cout << i << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        test();

    return 0;
}
