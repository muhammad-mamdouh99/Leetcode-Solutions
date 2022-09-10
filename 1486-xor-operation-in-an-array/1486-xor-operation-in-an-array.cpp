class Solution {
public:
    int xorOperation(int n, int start) {
        int cur, res = 0;
        for (int i = 0; i < n; i++) {
            cur = start + 2 * i;
            res ^= cur;
        }
        return res;
    }
};