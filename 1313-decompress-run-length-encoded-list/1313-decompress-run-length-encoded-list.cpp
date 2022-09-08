class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < (int) nums.size(); i += 2)
            while (nums[i]--)
                res.emplace_back(nums[i + 1]);
        return res;
    }
};