class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int m=matrix.size(),n=matrix[0].size();
          int rw=0,col=n-1;
          while(rw<m && col>=0)
          {
            if(target==matrix[rw][col])return true;
            else if(target>matrix[rw][col])rw++;
            else
            {
                col--;
            }
            
          }
          return false;
    }
};