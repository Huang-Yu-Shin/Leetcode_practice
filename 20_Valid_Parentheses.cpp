class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {

            // 遇到左括號，放進 Stack
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }

            // 遇到右括號
            else {
                // Stack 是空的，代表沒有對應的左括號
                if (st.empty()) {
                    return false;
                }

                if (s[i] == ')' && st.top() == '(') {
                    st.pop();
                }
                else if (s[i] == '}' && st.top() == '{') {
                    st.pop();
                }
                else if (s[i] == ']' && st.top() == '[') {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        // 所有括號都必須配對，Stack 最後必須為空
        return st.empty();
    }
};



