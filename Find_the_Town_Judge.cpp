class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        map<int,int> cond;
        for(int i=1;i<=N;i++)
        {
            cond[i];
        }
        for(auto v: trust)
        {
            cond.erase(v[0]);
            if(cond.find(v[1]) != cond.end()) cond[v[1]]++;
        }
        int l=0;
        int ind;
        for(auto k: cond)
        {
            if(k.second ==N-1) 
            {
                l++;
                ind = k.first;
            }
        }
        if(l==1) return ind;
        return -1;
                    }
};