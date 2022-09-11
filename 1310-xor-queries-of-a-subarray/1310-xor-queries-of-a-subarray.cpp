class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> pre;
        for (int i = 1; i < (int) arr.size(); ++i)
            arr[i] ^= arr[i - 1];
        for (auto &v: queries) {
            int l = v[0], r = v[1];
            if (l == 0)
                pre.emplace_back(arr[r]);
            else
                pre.emplace_back(arr[r] ^ arr[l - 1]);
        }
        return pre;
    }
};