class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> res;
    bool flag = false;
    for (int i = 0; i < (int) nums.size(); ++i) {
        for (int j = 0; i != j &&  j < (int) nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                res.push_back(i);
                res.push_back(j);
                flag = true;
                break;
            }
        }
        if (flag)
            break;
    }
    return res;
}
};