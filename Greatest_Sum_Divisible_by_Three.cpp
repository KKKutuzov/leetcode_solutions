class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int rem1=10005;
        int rem2=10005;
        int sum=0;
        for(auto x: nums)
        {
            sum+=x;
            if(x%3==1) // we have remainder 1 , so
            {
                rem2=min(rem2,rem1+x);
                rem1=min(rem1,x);
            }
            else if(x%3==2)
            {
                rem1=min(rem1,rem2+x);  //2 + 2 =4 %3=1; this might be 
                    possible.
                rem2=min(rem2,x);
            }
        }
                if(sum%3==0) return sum;
        else if(sum%3==1)
        {
            if(rem1!=INT_MAX)
                return sum-rem1;
            else
                return 0;
        }
        else
        {
            if(rem2!=INT_MAX)
                return sum-rem2;
            else
                return 0;
        }
    }
};