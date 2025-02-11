class Solution {
    public int subtractProductAndSum(int n) {
        int product_of_digits = 1;
        int sum_of_digits = 0;
        while (n > 0) {
            int val = n % 10;
            n /= 10;
            product_of_digits *= val;
            sum_of_digits += val;
        }
        return product_of_digits - sum_of_digits;
    }
}