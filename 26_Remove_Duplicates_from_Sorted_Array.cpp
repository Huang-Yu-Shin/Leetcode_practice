class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int i =0;
        int j =1;
        while(j<nums.size()){
            if (nums[j]!=nums[i]){
                i++;
                nums[i] = nums[j]; //將找到的新數字寫回 array
            }
            else{
                j++;
            }
        }
        return i+1;
    }
};