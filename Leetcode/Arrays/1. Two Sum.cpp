#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        for(int i=0; i<nums.size(); i++)
            umap[nums[i]] = i;


        vector<int> indeces;
        int i, j;
        for (i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (umap[diff] && umap[diff] != i) {
                indeces = {i, umap[diff]};
                return indeces;
            }
        }
        return indeces;
    }
};

int main(){
    Solution s;
    vector<int> indeces;
    vector<int> ar = {-1,-2,-3,-4,-5};
    //vector<int> ar = {2, 7, 11, 15};
    //vector<int> ar = {3, 3};
    int sum = -8;
    indeces = s.twoSum(ar, sum);
    for(int i : indeces){
        cout << i << " ";
    }
    return 0;
}
