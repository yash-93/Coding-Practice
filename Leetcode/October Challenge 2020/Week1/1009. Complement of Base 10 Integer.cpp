class Solution {
public:
    int bitwiseComplement(int N) {
        if(N == 0)
            return 1;
        unsigned mask = ~0;
        while (N & mask) mask <<= 1;
        return N ^ ~mask;
    }
};