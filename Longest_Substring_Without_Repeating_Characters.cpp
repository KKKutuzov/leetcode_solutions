class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0 || s.size()==1)
        {
            return s.size();
        }
        int i=0;
        map<char,int> mymap;
        mymap[s[0]] = 0;
        int answer = 1;
        int corr = 1;
        for(int j=1;j<s.size();j++)
        {
            corr+=1;
            if(mymap.find(s[j]) == mymap.end())
            {
                mymap[s[j]] = j;
                answer = max(answer,corr);
                            }
            else
            {
                while(s[i]!=s[j])
                {
                    mymap.erase(s[i++]);
                    corr-=1;
                }
                i++;
                corr-=1;
            }
        }
        return answer;
            }
};