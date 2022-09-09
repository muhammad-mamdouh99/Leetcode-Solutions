class Solution {
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue) {
        int cnt = 0;
        for (auto &s: items) {
            int j;
            if (ruleKey == "type")
                j = 0;
            else if (ruleKey == "color")
                j = 1;
            else
                j = 2;
            cnt += (s[j] == ruleValue);
        }
        return cnt;
    }
};