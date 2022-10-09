class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum = 0;
        int tmpsum = 0;
        set<int> ss;
        int start = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(ss.find(nums[i]) == ss.end()){
                ss.insert(nums[i]);
                tmpsum+=nums[i];
            }
            else{
                sum = max(tmpsum,sum);
                while(nums[start] != nums[i])
                {
                    ss.erase(nums[start]);
                    tmpsum-=nums[start];
                    start++;
                }
                start++;
            }
        }
        sum = max(tmpsum,sum);
        return sum;
            }
};