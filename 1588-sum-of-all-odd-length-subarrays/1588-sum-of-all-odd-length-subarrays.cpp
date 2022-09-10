class Solution {
public:
    int sumOddLengthSubarrays(vector<int> &arr) {
        int sum = 0, len = arr.size();
        for (int i = 0; i < len; ++i) {
            int left = i + 1, right = len - i;
            int all_sub = left * right;
            int odd_sub = all_sub / 2 + (all_sub % 2);
            sum += odd_sub * arr[i];
        }
        return sum;
    }
};