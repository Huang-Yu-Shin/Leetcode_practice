class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        int same_num = 0;
        int shortest = strs[0].size();

        for (int i = 1; i < strs.size(); i++) {
            shortest = min(shortest, (int)strs[i].size());
        }

        while (same_num < shortest) {
            int search_index = 0;

            while (search_index + 1 < strs.size() && strs[search_index][same_num] == strs[search_index + 1][same_num]) {
                search_index++;
            }

            if (search_index + 1 < strs.size()) {
                break;
            } //truely recognize not same number so break the outer while loop

            same_num++;
        }

        return strs[0].substr(0, same_num);
    }
};