class Solution {
public:
    int findMin(vector<int>& nums) {
        int bot,top,mid;
        bot = 0;
        int n = nums.size();
        top = n;
        if(nums[0] <nums[n-1])
        {
            return nums[0];
        }
        while(bot < top)
        {
            mid = (bot + top)/2;
            if(nums[mid] > nums[bot])
            {
                bot = mid;
            }
            else
            {
                top = mid;
            }
        }
        if(mid + 1!= n)
        {
            return  min(nums[mid],nums[mid+1]);
        }
        return  nums[mid];
    }
};