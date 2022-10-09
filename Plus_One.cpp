class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag =0;;
        for(int i=digits.size()-1;i>-1;i--)
        {
            if(digits[i] == 9)
            {
                digits[i] = 0;
            }
            else
            {
                digits[i]+=1;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            digits.push_back(1);
            std::rotate(digits.rbegin(), digits.rbegin() + 1, digits.rend());
        }
        return digits;
            }
};