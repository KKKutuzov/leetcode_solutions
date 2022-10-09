class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int local_max = 0, result = INT_MIN;
        for(int i = 0; i < nums.size(); ++i){
            local_max += nums[i];
            result = max(result, local_max);
                        if(local_max < 0){ 
                local_max = 0;
            }
        }
        return result;
            }
};