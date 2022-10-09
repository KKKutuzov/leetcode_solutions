class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int local_max = 1, result = INT_MIN;
        for(int i = 0; i < n; ++i){
            local_max *= nums[i];
            result = max(result, local_max);
            if(local_max == 0)
            { 
                local_max = 1;
            }
        }
                local_max = 1;
        for(int i = 0; i < n; ++i){
            local_max *= nums[n-i-1];
            result = max(result, local_max);
            if(local_max == 0)
            { 
                local_max = 1;
            }
        }
        return result;
    }
};