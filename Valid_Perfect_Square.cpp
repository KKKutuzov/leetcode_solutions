class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i=0;
        long long m;
        long long N = num;
        while (i<N){
        m=(i+N)/2;
        if(m*m == num)return true;
        if(m*m>num)N=m;
        if(m*m<num)i=m+1;
        }
        return N*N==num;
            }
};