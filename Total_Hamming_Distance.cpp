class Solution {
public:
        int totalHammingDistance(vector<int>& nums) {
        vector<int> v(32,0);
        for(int i=0;i<32;i++)
        {
            int ed = 0;
            for(int j=0;j<nums.size();j++)
            {
                ed += (nums[j]>>i) & 1; 
            }
                        v[i] = ed*(nums.size()-ed);
        }
        int answer = 0;
        for(int i=0;i<32;i++)
        {
            answer+=v[i];
        }
        return answer;
    }
};