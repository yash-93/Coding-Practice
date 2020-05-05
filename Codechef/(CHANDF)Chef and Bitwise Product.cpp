#include <iostream>
using namespace std;

void test(){
    int X,Y,L,R;
    cin >> X >> Y >> L >> R;
    cout << X & Y;

}

int main(){
    int T; cin >> T;
    while(T--)
        test();
}
