class Solution {
public:
    
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        //SubarraySum = Prefix[i] - Prefix[j]
        int odd = 0;
        int even = 1;
        int prefix = 0;
        int ans = 0;
        for (int i = 0; i < arr.size(); i++) {
            prefix += arr[i];

            if (prefix % 2 == 0) {
                ans += odd;
                even++;
            }
            else {
                ans += even;
                odd++;
            }
            ans %= MOD;
        }

        return ans;
    }
};