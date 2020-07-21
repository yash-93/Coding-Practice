#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;
    int c;
    long long sum = 0;

    while(true){
        c = a + b;
        if(a>4000000 || b>4000000 || c>4000000) break;
        a = b;
        b = c;
        if(c%2 == 0)
            sum += c;
    }

    cout << sum+2;

    return 0;
}
