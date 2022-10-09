class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int mid;
        if(nums[r] < target) return r+1;
        while(l+1 < r)
        {
            mid = (r+l)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target)
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }
        return nums[l] < target ? l+1 : l;
    }
};