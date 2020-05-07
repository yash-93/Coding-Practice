#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int N, *quat, *total_quat;
    cin >> N;
    long long int countt = 0;
    quat = new long long int[N];
    total_quat = new long long int[N];
    bool break_flag = false;

    for(long long int i=0; i<N; i++)
        cin >> quat[i];

    for(long long int i=0; i<N; i++)
        cin >> total_quat[i];

    for(long long int i=0;i>=0;i++)
    {
        for(long long int j=0; j<N; j++)
        {
            if(total_quat[j]>=quat[j])
            {
                total_quat[j] = total_quat[j] - quat[j];
            }
            else
            {
                break_flag = true;
            }

            if(break_flag)
                break;
        }

        if(break_flag)
            break;

        ++countt;
    }

    cout << countt << endl;

    return 0;
}
