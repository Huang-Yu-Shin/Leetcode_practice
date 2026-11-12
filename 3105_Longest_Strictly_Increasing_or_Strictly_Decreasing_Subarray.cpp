class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        vector<int> number;

        for (int a = 0; a < nums.size(); a++) {
            int step = 1;

            if (a + 1 < nums.size() && nums[a] > nums[a+1]) {
                while (a + step < nums.size() &&
                       nums[a+step-1] > nums[a+step]) {
                    step++;
                }
                number.push_back(step);
            }
            else if (a + 1 < nums.size() && nums[a] < nums[a+1]) {
                while (a + step < nums.size() &&
                       nums[a+step-1] < nums[a+step]) {
                    step++;
                }
                number.push_back(step);
            }
            else {
                number.push_back(1);
            }
        }

        return *max_element(number.begin(), number.end());
    }
};


class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int tang=1,giam=1,ketQua=1;
        for(int i=1;i<(int)nums.size();++i) {
            tang=nums[i]>nums[i-1]?tang+1:1;
            giam=nums[i]<nums[i-1]?giam+1:1;
            ketQua=max({ketQua,tang,giam});
        }
        return ketQua;
    }
};