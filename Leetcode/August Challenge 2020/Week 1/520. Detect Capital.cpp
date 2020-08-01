class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        if(n==1)
            return true;
        
        int i=1;
        int j=n-1;
        int upper = 0, lower = 0;
        while(i<j){
            if(isupper(word[i]))
                upper++;
            else
                lower++;
            
            if(isupper(word[j]))
                upper++;
            else
                lower++;
            
            i++;j--;
        }
        i--;j++;
        if(j-i == 1){
            if(isupper(word[0]) && (lower == n-1 || upper == n-1) )
                return true;
            else if(islower(word[0]) && lower == n-1){
                return true;
            }else{
                return false;
            }
        }
        else{
            if(isupper(word[++i]))
                upper++;
            else
                lower++;
            
            if(isupper(word[0]) && (lower == n-1 || upper == n-1) )
                return true;
            else if(islower(word[0]) && lower == n-1){
                return true;
            }else{
                return false;
            }
        }
        
        
        return true;
    }
};