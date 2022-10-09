class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> str;
        set<int> sto;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    str.insert(i);
                    sto.insert(j);
                }
            }
        }
        for(auto v: str)
        {
            for(int j=0;j<matrix[v].size();j++)
            {
                matrix[v][j] = 0;
            }
        }
        for(auto v: sto)
        {
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][v] = 0;
            }
        }
            }
};