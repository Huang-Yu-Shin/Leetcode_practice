class Solution {
public:
    int reverse(int x) {
        bool positive = (x >= 0);
        string final = "";

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            final += to_string(abs(digit));
        }

        try {
            long long result = stoll(final);

            if (!positive) {
                result = -result;
            }

            if (result > INT_MAX || result < INT_MIN) {
                return 0;
            }

            return (int)result;
        }
        catch (...) {
            return 0;
        }
    }
};

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x != 0){
            int digit = x %10;
            if( (ans > INT_MAX/10) || (ans < INT_MIN/10)){
                return 0;
            }
            ans = ans*10 + digit;
            x = x/10;
        }
        return ans;

    }
};