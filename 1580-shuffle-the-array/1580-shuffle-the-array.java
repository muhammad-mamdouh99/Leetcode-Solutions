class Solution {
    public int[] shuffle(int[] nums, int n) {
        int len = n * 2;
        int[] ans = new int[len];
        int i = 0;
        int x = 0;
        while (i < len) {
            ans[i] = nums[x];
            ans[i + 1] = nums[x + n];
            x++;
            i += 2;
        }
        return ans;
    }
}