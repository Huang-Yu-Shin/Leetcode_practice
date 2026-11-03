class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max_value = *max_element(nums.begin(), nums.end());
        int mini_move = 0;
        for (int num : nums) {
            mini_move += max_value - num;
        }
        return mini_move;
    }
};