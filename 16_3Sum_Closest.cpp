class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int num = nums.size();
        int result = 0;
        int candidate_diff = INT_MAX;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < num - 2; i++) {

            int left = i + 1;
            int right = num - 1;

            while (left < right) {

                int sum = nums[i] + nums[left] + nums[right];
                int diff = abs(sum - target);

                if (diff < candidate_diff) {
                    candidate_diff = diff;
                    result = sum;
                }

                if (sum < target) {
                    left++;
                }
                else if (sum > target) {
                    right--;
                }
                else {
                    return sum;
                }
            }
        }

        return result;
    }
};