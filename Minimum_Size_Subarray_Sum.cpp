class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=0,a=0,b=0,n=nums.size(),sum=nums[0];
        if(sum>=target)
            return 1;
        while(b<n-1){
            sum+=nums[++b];
            while(sum>=target){
                sum-=nums[a++];
                ans= (ans>b-a+2 || ans == 0) ? b-a+2 : ans;
           }
        }
        return ans;
    }
};