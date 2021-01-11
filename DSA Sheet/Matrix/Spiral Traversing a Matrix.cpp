class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> spiral;
        int maxEle = r * c;
        int currEle = 0;
        
        int minR = 0, minC = 0;
        int maxR = r-1, maxC = c-1;
        
        while(currEle < maxEle){
            // top
            for(int j=minC; j <= maxC && currEle < maxEle; j++){
                spiral.push_back(matrix[minR][j]);
                currEle++;
            }
            minR++;

            // right
            for(int i=minR; i <= maxR && currEle < maxEle; i++){
                spiral.push_back(matrix[i][maxC]);
                currEle++;
            }
            maxC--;
            
            // bottom
            for(int j=maxC; j >= minC && currEle < maxEle; j--){
                spiral.push_back(matrix[maxR][j]);
                currEle++;
            }
            maxR--;
            
            //left
            for(int i=maxR; i >= minR && currEle < maxEle; i--){
                spiral.push_back(matrix[i][minC]);
                currEle++;
            }
            minC++;
        }
        
        return spiral;
    }
};