#include <bits/stdc++.h>
using namespace std;

void test(){
    int n,b,m,*x;
    cin >> n >> b >> m;
    x = new int[m];
    for(int i=0; i<m; i++)
        cin >> x[i];
    
    int blocks = n/b + 1;
    
    int start_index[blocks];
    for(int i=0; i<blocks; i++){
        start_index[i] = i*b;
    }
    int prev_block = -1;
    int res = 0;
    
    for(int i=0; i<m; i++){
        int j = 0;
        while(x[i] >= start_index[j]){
            j++;
            if(j==blocks) break;
        }
        if(prev_block != --j){
            res++;
            prev_block = j;
        }
    }
    cout << res << endl;
}

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) test();
	return 0;
}
