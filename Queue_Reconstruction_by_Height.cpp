class Solution {
public:
    static bool cmd(const vector<int>& a, const vector<int>& b) {
        if(a[0] == b[0]) return a[1] > b[1];
        return a[0] < b[0];
    }
        vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), cmd);
        vector<vector<int>> answer(people.size());
        for(int i=0; i < people.size(); i++) {
            int j = 0;
            int ind = people[i][1];
            while(j<people.size()) {
                if(answer[j].empty() ==false) {
                    ind++;
                }
                if(ind == j && answer[j].empty()) {
                    answer[j] = people[i];
                    break;
                }
                j++;
            }
        }
        return answer;
    }
};