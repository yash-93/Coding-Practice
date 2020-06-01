#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        int arr[word1.size()+1][word2.size()+1];

        for(int k=0; k<=word1.size(); k++)
            arr[k][0] = k;

        for(int k=0; k<=word2.size(); k++)
            arr[0][k] = k;

        for (int i = 1; i <= word1.size(); i++) {
			for (int j = 1; j <= word2.size(); j++) {
				if (word1[i - 1] == word2[j - 1]) {
					arr[i][j] = arr[i - 1][j - 1];
				} else {
                    arr[i][j] = 1 + min(arr[i][j - 1], min(arr[i - 1][j], arr[i - 1][j - 1]) );
				}
			}
		}

        return arr[word1.size()][word2.size()];
    }
};

int main(){
    string s1 = "horse";
    string s2 = "ros";
    Solution s;
    cout << s.minDistance(s1,s2);
    return 0;
}
