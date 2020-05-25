#include <bits/stdc++.h>
using namespace std;

long repeatedString(string s, long n) {
    int len = s.length();
    int count = 0;
    long res = 0;
    for(int i=0; i<len; i++){
        if(s[i] == 'a')
            count++;
    }

    res = n/len * count;

    long mod = n%len;

    for(long i=0; i<mod; i++){
        if(s[i] == 'a')
            res++;
    }

    return res;
}

int main()
{
    string s;
    getline(cin, s);

    long n;
    cin >> n;

    long result = repeatedString(s, n);

    cout  << result;
    return 0;
}
