class Solution {
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
        int maxi = 0;
        for (auto &i : candies)
            if (i > maxi)
                maxi = i;
        vector<bool> result;
        for (auto &i : candies)
            i + extraCandies >= maxi ? result.emplace_back(true) : result.emplace_back(false);
        return result;
    }
};
