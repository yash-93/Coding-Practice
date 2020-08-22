class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int even = 0;
        int odd = A.size()-1;

        while(even<odd){
            if(A[even]%2==1 && A[odd]%2==0){
                int temp = A[even];
                A[even] = A[odd];
                A[odd] = temp;
                even++;
                odd--;
            }else if(A[even]%2==0 && A[odd]%2==0){
                even++;
            }else if(A[even]%2==1 && A[odd]%2==1){
                odd--;
            }else{
                odd--;even++;
            }
        }
        
        return A;
    }
};