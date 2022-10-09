class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> answer;
        long long ss = (1<<n);
        while(ss--)
        {
            long long mask = ss;
            vector<int> subset;
            for(int i=0;i<n;i++)
            { 
                if (mask & 1)
                {
                    subset.push_back(nums[i]);
                }
                mask = mask>>1;
            }
            sort(subset.begin(),subset.end());
            answer.insert(subset);
        }
        vector<vector<int>> result;
        for(auto elm: answer)
        {
            result.push_back(elm);
        }
        return result;
            }
};