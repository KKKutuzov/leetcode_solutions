class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> ss;
        map<char,int> tt;
        if(s.size() !=t.size())
        {
            return false;
        }
        for(int i=0;i<s.size();i++)
        {
            if(ss.find(s[i])==ss.end())
            {
                ss[s[i]] = 1;
            }
            else
            {
                ss[s[i]]+=1;
            }
        }
        for(int j=0;j<t.size();j++)
        {
            if(tt.find(t[j])==tt.end())
            {
                tt[t[j]] = 1;
            }
            else
            {
                tt[t[j]]+=1;
            }
        }
        return tt == ss;
            }
};