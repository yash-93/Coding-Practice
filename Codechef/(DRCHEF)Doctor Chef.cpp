/*#include <bits/stdc++.h>
using namespace std

#define ll long long

void test(){
    ll n, x;
    cin >> n >> x;
    vector<ll> a;
    ll val;
    for(ll i=0; i<n; i++){
        cin >> val;
        a.push_back(val);
    }
    ll days = 0;
    sort(a.begin(), a.end());
    vector<ll> initial(a.begin(), a.end());
    while(a.size()>0){
        vector<ll>::iterator it = lower_bound(a.begin(), a.end(), x);
        if(it == a.end()){
            x = a.back();
            a.pop_back();
            initial.pop_back();
            for(ll i=0; i<a.size(); i++){
                a[i] = a[i]*2 > initial[i] ? initial[i] : a[i]*2;
            }
        }else{
            a[it - a.begin()] -= x;
            if(a[it - a.begin()] == 0){
                a.erase(it);
                initial.erase(initial.begin()+(it - a.begin()));
            }else{
                a[it - a.begin()] = a[it - a.begin()]*2 > initial[it - a.begin()] ? initial[it - a.begin()] : a[it - a.begin()]*2;
            }
        }
        x *= 2;
        ++days;
    }
    cout << days << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void test(){
    ll n, x, days = 0;
    cin >> n >> x;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    vector<ll>::iterator it = lower_bound(a.begin(), a.end(), x);
    ll lb = it - a.begin();

    for(int i=lb; i<n; i++)
    {
        if(x<a[i])
        {
            while(x<a[i])
            {
                x = 2*x;
                days++;
            }
            days++;
        }
        else
        days++;
        x = 2*a[i];
    }
        ll tot = lb + days;
        if(lb != 0)
        {
            days = 0;
            lb--;
            for(int i=lb; i<n; i++)
            {
                if(x < a[i])
                {
                    while(x<a[i])
                    {
                        x = 2*x;
                        days++;
                    }
                    days++;
                }
                else
                days++;
                x = 2*a[i];
            }
            if(days+lb<tot)
                cout << days+lb << endl;
            else
                cout << tot << endl;
        }
        else
            cout << tot << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        test();
    return 0;
}
