class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mymap;
        for(int i=0;i<nums.size();i++)
        {
            if(mymap.find(nums[i]) != mymap.end())
            {
                return true;
            }
            else
            {
                mymap[nums[i]] = 1;
            }
        }
        return false;
            }
};