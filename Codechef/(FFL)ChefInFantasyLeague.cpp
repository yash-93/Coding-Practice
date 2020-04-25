#include <iostream>
using namespace std;

void test(){
    int N, S;
    string res = "no";
    cin >> N >> S;
    int rem = 100 - S;
    int P[N], DorF[N];

    for(int i=0; i<N; i++){
        cin >> P[i];
    }

    for(int i=0; i<N; i++){
        cin >> DorF[i];
    }


    for(int i=0; i<N; i++)
        {
        for(int j=i+1; j<N; j++)
        {
            if(DorF[i]!=DorF[j])
            {
                if(P[i]+P[j]<=rem)
                {
                    res = "yes";
                }
            }
            if(res == "yes")
                break;
        }
        if(res == "yes")
            break;
    }

    cout << res <<"\n";

}

int main(){
    int T;
    cin >> T;
    for(int i=0; i<T; i++)
        test();
    return 0;
}
