class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res;
        
        for (int i = 0; i <= num; ++i) {
            int n = i;
            
            int cnt = 0;
            while (n > 0) {
                ++cnt;
                n = n & (n -1);
            }
            res.push_back(cnt);
        }
        return res;
    }
};