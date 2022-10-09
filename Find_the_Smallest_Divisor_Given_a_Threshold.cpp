class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        if (!n) return 0;
                int mx = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
            mx = max(mx, nums[i]);
                int l = 1, r = mx;
        while (l <= r) {
            int m = l + (r-l)/2;
                        int sum = 0;
            for (int i = 0; i < nums.size(); i++)
                sum += (nums[i]+m-1)/m;
                        if (sum <= threshold)
                r = m-1;
            else
                l = m+1;
        }
                return l;
            }
};