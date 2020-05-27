#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getPower(int val){
        int pow = 0;
        while(val!=1){
            if(val&1){
                val = 3 * val + 1;
                ++pow;
            }else{
                val = val/2;
                ++pow;
            }
        }
        return pow;
    }

    int getKth(int lo, int hi, int k) {
        vector<pair<int,int> > vec;
        for (int i=lo; i<=hi; i++){
            vec.push_back({getPower(i), i});
        }


        sort(vec.begin(), vec.end(), [&] (pair<int,int> p1, pair<int,int> p2){

            if(p1.first==p2.first)
            {
                return p1.second < p2.second ;
            }

            return p1.first < p2.first ;
        });

        pair<int, int> p = vec[k-1];
        return p.second;
    }
};

int main(){
    Solution s;
    cout << s.getKth(1, 1, 1);


    return 0;
}
