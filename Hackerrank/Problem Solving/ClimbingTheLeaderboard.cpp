#include <bits/stdc++.h>
using namespace std;
/*
int binarySearch(vector<int> scores, int l, int r, int key)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (scores[mid] == key)
            return mid+1;

        if (scores[mid] > key && key > scores[mid+1])
            return mid+2;

        if (scores[mid] < key && key < scores[mid-1])
            return mid+1;

        if (scores[mid] < key)
            return binarySearch(scores, l, mid - 1, key);

        return binarySearch(scores, mid + 1, r, key);
    }
    return -1;
}
*/
int binarySearch(vector<int> scores, int key)
{
    int l = 0;
    int r = scores.size()-1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (scores[mid] == key)
            return mid+1;
        else if (scores[mid] > key && key > scores[mid+1])
            return mid+2;
        else if (scores[mid] < key && key < scores[mid-1])
            return mid+1;
        else if (scores[mid] < key)
            r = mid - 1;
        else if (scores[mid] > key)
            l = mid + 1;
    }
    return -1;
}

vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
    vector<int> ranks;
    scores.erase( unique( scores.begin(), scores.end() ), scores.end() );

    for(int i=0; i<alice.size(); i++){
        int key = alice[i];
        if(key>scores[0])
            ranks.push_back(1);
        else if(key<scores[scores.size()-1])
            ranks.push_back(scores.size()+1);
        else{
            //int index = binarySearch(scores, 0, scores.size()-1, key);
            int index = binarySearch(scores, key);
            ranks.push_back(index);
        }
    }
    return ranks;
}

int main(){
    int n, m, val;
    vector<int> scores, alice, res;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> val;
        scores.push_back(val);
    }

    cin >> m;
    for(int i=0; i<m; i++){
        cin >> val;
        alice.push_back(val);
    }

    res = climbingLeaderboard(scores, alice);

    for(int i=0; i<m; i++){
        cout << res[i] << "\n";
    }

    return 0;
}
