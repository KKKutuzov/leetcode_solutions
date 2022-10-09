class Solution {
public:
     int singleNumber(vector<int>& nums) {
        int f= 0;
       for(auto it:nums)f^=it;
        return f;
    }
};