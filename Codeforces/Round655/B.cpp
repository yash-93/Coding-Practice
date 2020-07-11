#include <bits/stdc++.h>
using namespace std;

int LCM(int a, int b){
    int lcm = b;
    while(true) {
      if( lcm%a==0 && lcm%b==0 ) {
         break;
      }
      lcm++;
   }
   return lcm;
}

void test(){
    int n; cin >> n;
    int temp, p=0, q=0;
    int min = INT_MAX;
    for(int i=1; i<=n/2; i++){
        if(n-i % i == 0){
            if(n-i < min){
                min = n-i;
                p = i;
                q = n-i;
            }
        }else{
            temp  = LCM(i,n-i);
            if(temp < min){
                min = temp;
                p = i;
                q = n-i;
            }
        }
    }
    cout << p << " " << q << "\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        test();
    }
    return 0;
}
