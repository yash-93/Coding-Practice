#include <bits/stdc++.h>
using namespace std;

#define lli long long
#define mod 1000000007

lli powr(lli n,lli p)
{
    lli ret = 1LL;
    while(p)
    {
        if(p&1)
        {
            ret *= n;
            ret %= mod;
        }
        n *= n;
        n %= mod;
        p >>= 1;
    }
    return ret;
}

void test(){
    int n;
    lli a;
    cin >> n >> a;
    lli total = a;
    lli b = a*a, pp = 1;
    for(int i=2; i<=n; i++){
        lli num = (2*i) - 1;
        b = (b%mod)*(pp%mod)%mod;
        pp = powr(b, num);
        total = ((total%mod)+(pp%mod));
    }

    cout << total%mod << endl;

}

int main(){
    int T;
    cin >> T;
    for(int i=0; i<T; i++)
        test();
    return 0;
}

