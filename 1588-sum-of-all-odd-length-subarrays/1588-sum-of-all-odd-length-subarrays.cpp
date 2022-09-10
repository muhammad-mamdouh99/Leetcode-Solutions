class Solution {
public:
    int sumOddLengthSubarrays(vector<int> &arr) {
        int sum = 0, len = arr.size();
        for (int i = 0; i < len; ++i) {
            int left = i + 1, right = len - i;
            int all_occur = left * right;
            int odd_occur = all_occur / 2 + (all_occur % 2);
            sum += odd_occur * arr[i];
        }
        return sum;
    }
};