class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        int kek = nums.size();
        for(int i=0;i<kek;i++)
        {
            for(int j=i+1;j<kek;j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
                }
            }
        }
        return answer;
            }
};