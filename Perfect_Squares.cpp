class Solution {
public:
    int numSquares(int n) {
        for(int i=0;i*i<=n;i++)
        {
            if(i*i == n){
                return 1;
            }
        }
                        for(int i=0;i*i<n;i++)
        {
            for(int j=0;j*j<n;j++)
            {
                if(n == i*i + j*j){
                    return 2;
                }
            }
        }
        for(int i=0;i*i<n;i++)
        {
            for(int j=0;j*j<n;j++)
            {
                for(int t=0;t*t<n;t++){
                    if(n == i*i + j*j + t*t){
                        return 3;
                }
                }
            }
        }
        return 4;
            }
};