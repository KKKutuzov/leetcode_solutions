class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long x=1;
        int zero=0;
        for(auto l: nums)
        {
            if(l!=0)
            {
                x*=l;
            }
            else
            {
                zero++;
            }
        }
        vector<int> answer;
        if(zero > 1)
        {
            for(int i=0;i<nums.size();i++)
            {
                answer.push_back(0);
            }
            return answer;
        }
        if(zero == 1)
        {
            for(auto k: nums)
            {
                if(k == 0)
                {
                    answer.push_back(x);
                }
                else
                {
                    answer.push_back(0);
                }
            }
            return answer;
        }
        for(auto l: nums)
        {
            answer.push_back(x/l);  
        }
        return answer;
    }
};