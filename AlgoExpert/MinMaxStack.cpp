// Time Complexity => O(1)
// Space Compexity => O(n)

#include <bits/stdc++.h>
using namespace std;

struct structure{
    int ele;
    int minele;
    int maxele;
};

int main(){
    stack<structure> s;
    structure ss;
    ss.ele = 4;
    ss.minele = 4;
    ss.maxele = 4;
    s.push(ss);

    ss.ele = 3;
    ss.minele = ss.ele < ss.minele ? ss.ele : ss.minele;
    ss.maxele = ss.ele > ss.maxele ? ss.ele : ss.maxele;
    s.push(ss);

    ss.ele = 1;
    ss.minele = ss.ele < ss.minele ? ss.ele : ss.minele;
    ss.maxele = ss.ele > ss.maxele ? ss.ele : ss.maxele;
    s.push(ss);

    ss.ele = 6;
    ss.minele = ss.ele < ss.minele ? ss.ele : ss.minele;
    ss.maxele = ss.ele > ss.maxele ? ss.ele : ss.maxele;
    s.push(ss);

    ss.ele = 7;
    ss.minele = ss.ele < ss.minele ? ss.ele : ss.minele;
    ss.maxele = ss.ele > ss.maxele ? ss.ele : ss.maxele;
    s.push(ss);

    structure s2;
    s2 =  s.top();
    cout << s2.ele << " " << s2.minele << " " << s2.maxele;
    return 0;
}
