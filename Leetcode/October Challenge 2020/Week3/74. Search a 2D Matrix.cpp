class Solution {
public:
int binarySearchModified(vector<vector<int>>& matrix, int l, int h, int target){
        if(h>=l){
            int mid = l + (h-l)/2;
            
            if(matrix[mid][0] == target){
                return -2;
            }
            if(matrix[mid][0] > target){
                if(matrix[mid-1][0] > target){
                    return binarySearchModified(matrix, l, mid-1, target);
                }
                return mid-1;
            }
            if(matrix[mid][0] < target){
                return binarySearchModified(matrix, mid+1, h, target);
            }
            
        }
        return h;
    }
    
    int binarySearch(vector<vector<int>>& matrix, int l, int r, int x, int row) 
    { 
        while (l <= r) { 
            int m = l + (r - l) / 2; 

            if (matrix[row][m] == x) 
                return m; 

            if (matrix[row][m] < x) 
                l = m + 1; 

            else
                r = m - 1; 
        } 

        return -1; 
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if(m==0)
            return 0;
        int n = matrix[0].size();
        if(n==0)
            return 0;
        
        if(matrix[0][0]>target)
            return false;
        int row = binarySearchModified(matrix, 0, m-1, target);
        
        //cout << row;
        
        if(row == -1)
            return false;
        
        if(row == -2)
            return true;
        
        row = binarySearch(matrix, 0, n-1, target, row);
        //cout << row;
        if(row != -1)
            return true;
    
        return false;
    }
};