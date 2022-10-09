class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0;
        int m;
        int N;
        N=nums.size();
        if(N == 1) return nums[0];
        while (i<N){
        m=(i+N)/2;
        if((m % 2 == 0 && nums[m]==nums[m+1])) i=m+2;
        else if((m % 2 == 1 && nums[m]==nums[m-1])) i = m+1;
        else N=m;
        }
        return nums[N];
            }
};