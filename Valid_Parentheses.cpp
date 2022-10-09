class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
                continue;
            }
            if(st.size() == 0)
            {
                return false;
            }
            if(s[i]==')')
            {
                if(st.top() != '(')
                {
                    return false;
                }
                st.pop();
            }
            if(s[i]=='}')
            {
                if(st.top() != '{')
                {
                    return false;
                }
                st.pop();
            }
            if(s[i]==']')
            {
                if(st.top() != '[')
                {
                    return false;
                }
                st.pop();
            }
        }
        return st.size()==0;
            }
};