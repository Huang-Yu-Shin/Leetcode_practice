class Solution {
public:
    vector<string> letterCombinations(string digits) {

        if (digits.empty()) return {};

        map<int, string> phone = {
            {2, "abc"},
            {3, "def"},
            {4, "ghi"},
            {5, "jkl"},
            {6, "mno"},
            {7, "pqrs"},
            {8, "tuv"},
            {9, "wxyz"}
        };

        vector<string> result;
        string path;
        
        function<void(int)> dfs = [&](int index) {
            // 所有 digit 都處理完了
            if (index == digits.size()) {
                result.push_back(path);
                return;
            }
            // 取得目前 digit 對應的字母
            string letters = phone[digits[index] - '0'];
            for (char c : letters) {
                path.push_back(c);  //選擇一個字母
                dfs(index + 1);   //往下一層，繼續選下一個 digit 的字母
                path.pop_back();  //回到上一層，把剛剛選的字母移除，換其他選擇
            }
        };

        dfs(0);

        return result;
    }
};