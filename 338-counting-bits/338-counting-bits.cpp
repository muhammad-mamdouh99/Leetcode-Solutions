class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for (int i = 0; i <= n; i++) {
            int cur = i, cnt = 0;
            while (cur) {
                cnt++;
                cur &= (cur - 1);
            }
            res.emplace_back(cnt);
        }
        return res;
    }
};