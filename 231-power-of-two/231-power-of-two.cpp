class Solution {
public:
    bool isPowerOfTwo(int n) {
        int cnt = 0;
        while (n > 0) {
            cnt++;
            n &= (n - 1);
        }
        return cnt == 1;
    }
};