#include <bits/stdc++.h>
using namespace std;

bool wordBreak(string s, vector<string>& wordDict) {
    bool res = false;
    int n = s.size();
    vector<vector<bool> > dp(s.size(), vector<bool> (s.size(),false));
    string t = "";
    for(int i=0; i<n; i++){
        t = s[i];
        if(find(wordDict.begin(), wordDict.end(), t) != wordDict.end()){
            dp[i][i] = true;
        }
    }

    string temp = "";
    for(int j=1; j<n; j++){
        for(int i=0; i<=n-1-j; i++){
            temp = s.substr(i,j+1);
            if(find(wordDict.begin(), wordDict.end(), temp) != wordDict.end())
                dp[i][i+j] = true;
            else{
                for(int k=0; k<temp.size()-1; k++){
                    if( dp[i][i+k] && dp[i+k+1][i+j]) dp[i][i+j] = true;
                }

            }
        }
    }
    return res = dp[0][s.size()-1] ? true : false;
}

int main(){
    string s = "Iamace";
    vector<string> wordDict {{"I", "am", "ace"}};
    cout << wordBreak(s, wordDict);

    return 0;
}

