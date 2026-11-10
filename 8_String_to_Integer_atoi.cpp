class Solution {
public:
    int myAtoi(string s) {
        string num_string ="";
        bool positive = true;
        int i = 0;
        long long result = 0;
        while (i < s.size() && s[i] == ' ') {
            i++;
        }
        // 2. Check sign
        if (i < s.size() && s[i] == '-') {
            positive = false;
            i++;
        }
        else if (i < s.size() && s[i] == '+') {
            i++;
        }

        // 3. Convert digits
        while (i < s.size() && isdigit(s[i])) {
            int digit = s[i] - '0';

            result = result * 10 + digit;

            // 4. Check overflow
            if (positive && result > INT_MAX) {
                return INT_MAX;
            }

            if (!positive && result > 2147483648LL) {
                return INT_MIN;
            }

            i++;
        }

        // 5. Apply sign
        if (!positive) {
            result = -result;
        }

        return (int)result;
    }
};