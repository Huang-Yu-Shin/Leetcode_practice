class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {// 避免第一個數字重複
                continue; //跳過目前這一輪迴圈剩下尚未執行的程式碼，直接進入下一輪迴圈
            }

            int left = i + 1; //第一個數字右邊開始
            int right = nums.size() - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1]) {// 避免第二個數字重複
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {// 避免第三個數字重複
                        right--;
                    }
                }
                else if (sum < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
        return ans;
    }
};