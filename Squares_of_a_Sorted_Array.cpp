class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> first;
        vector<int> second;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                second.push_back(nums[i]*nums[i]);
            }
            else
            {
                first.push_back(nums[i]*nums[i]);
            }
        }
        vector<int> answer;
        int i = first.size()-1;
        int j = 0;
        while(i!=-1 && j!= second.size())
        {
            if(first[i] > second[j])
            {
                answer.push_back(second[j]);
                j++;
            }
            else
            {
                answer.push_back(first[i]);
                i--;
            }
        }
        if(i==-1)
        {
            while(j!= second.size())
            {
                answer.push_back(second[j]);
                j++;
            }
        }
        else
        {
            while(i!=-1)
            {
                answer.push_back(first[i]);
                i--;
            }
        }
        return answer;
            }
};