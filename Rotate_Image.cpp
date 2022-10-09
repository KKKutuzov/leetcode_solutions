class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i+1;j<matrix.size();j++)
            {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = tmp;
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size()/2;j++)
            {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[i][matrix[i].size() - j-1];
                matrix[i][matrix[i].size() - j-1] = tmp;
            }
        }
            }
};