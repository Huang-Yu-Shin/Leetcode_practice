class Solution {
public:
    vector<string> result;

    void backtrack(string current, int open, int close, int n) {

        // 已經使用完所有括號
        if (current.size() == 2 * n) {
            result.push_back(current);
            return;
        }

        // 還有左括號可以使用
        if (open < n) {
            backtrack(current + "(", open + 1, close, n);
        }

        // 右括號數量不能超過左括號
        if (close < open) {
            backtrack(current + ")", open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        backtrack("", 0, 0, n); //很像tree的概念
        return result;
    }
};