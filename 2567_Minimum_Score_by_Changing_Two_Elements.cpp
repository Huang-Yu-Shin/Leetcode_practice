class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int index= nums.size();
        int min_ressult=0;
        if (index>2){
            min_ressult=min((nums[index-3]-nums[0]),(nums[index-2]-nums[1]));
            min_ressult=min((nums[index-1]-nums[2]),min_ressult);
        }
        return min_ressult;
    }
};


// 因為可以修改兩個元素，所以有三種主要情況：
// 情況一：修改最大的兩個元素
// 情況二：修改最小和最大的元素
// 情況三：修改最小的兩個元素