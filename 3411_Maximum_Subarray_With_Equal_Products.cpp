class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i =0; i<n; i++){

            long long product = 1;
            long long g = 0;
            long long l = 1;

            for (int j = i; j < n; j++) {

                product *= nums[j];
                g = gcd(g, (long long)nums[j]);
                l = lcm(l, (long long)nums[j]);
                if (product > g * l) { /// 避免 product 繼續增長造成 overflow
                    break;
                }
                if (product == g * l) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};