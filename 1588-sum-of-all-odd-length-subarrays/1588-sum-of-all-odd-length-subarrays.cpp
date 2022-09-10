class Solution {
public:
    int sumOddLengthSubarrays(vector<int> &arr) {
        int sum = 0, len = arr.size();
        for (int i = 1; i <= len; i += 2) {
            for (int j = 0; j <= len - i; ++j) {
                int cur = 0;
                for (int k = j; k < j + i; ++k) {
                    cur += arr[k];
                }
                sum += cur;
            }
        }
        return sum;
    }
};