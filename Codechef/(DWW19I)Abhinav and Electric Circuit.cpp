#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

void test(){
    int N, *A;
    long long int total=0;
    cin >> N;
    A = new int[N];
    for(int i=0; i< N; i++){
        cin >> A[i];
        total += A[i];
    }

    int len = findGCD(A, N);


    cout << len << " " <<total/len << "\n";
}

int main(){
    int T;
    cin >> T;
    for(int i=0; i<T; i++)
        test();
    return 0;
}
