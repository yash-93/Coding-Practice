#include <bits/stdc++.h>
using namespace std;

#define ll long long

/**bool checkDivisors(ll n)
{
    for (ll i=3; i<=sqrt(n); i += 2)
    {
        //cout << "p";
        if (n%i == 0)
        {
            return true;
        }
    }
    return false;
}

void test(){
    ll n;
    cin >> n;
    if(n%2 == 1)
        cout << "YES\n";
    else {
        if(checkDivisors(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}*/

bool isPowerOfTwo (ll x)
{
    return x && (!(x&(x-1)));
}

void test(){
    ll n;
    cin >> n;
    if(n%2 == 1)
        cout << "YES\n";
    else {
        if(isPowerOfTwo(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
