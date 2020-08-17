#include <bits/stdc++.h>
using namespace std;

int gcd(int m, int n){
    if(n != 0)
        return gcd(n, m%n);
    return m;
}

int maxPrimeFactor(int m){
    int max = 1;
    for(int i=2; i<sqrt(m); i++){
        if(m%i==0){
            max = m/i;
            break;
        }
    }
    return max;
}

int main(){
    int m,n;
    cin >> m >> n;

    int gcf = gcd(m,n);

    int edges = 0;
    while(m!=gcf){
        if(m%2==0)
            m /= 2;
        else if(m%3==0)
            m /= 3;
        else if(m%5==0)
            m /= 5;
        else
            m = maxPrimeFactor(m);
        edges++;
    }

    while(n!=gcf){
        if(n%2==0)
            n /= 2;
        else if(n%3==0)
            n /= 3;
        else if(n%5==0)
            n /= 5;
        else
            n = maxPrimeFactor(n);
        edges++;
    }

    cout << edges;

    return 0;
}
