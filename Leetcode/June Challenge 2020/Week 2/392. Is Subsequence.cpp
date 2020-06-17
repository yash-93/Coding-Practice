class Solution {
public:
    bool isSubsequence(string s, string t) {
        int temp = 0, found = 0;
        for(auto ch:s){
            for (int j=temp; j<t.size(); j++){
                if(ch == t[j]){
                    temp = j+1;
                    found++;
                    break;
                }
                if(j==t.size()-1)
                    return false;
            }
        }
        if(found == s.size())
            return true;
        else
            return false;
    }
};