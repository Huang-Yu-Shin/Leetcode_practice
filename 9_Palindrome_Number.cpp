class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};



class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int temp = x;
        long long rev = 0 ;
        while(x > 0){
            int digit = x % 10;
            x = x / 10;
            rev = rev * 10 + digit;
        }

        if(rev == temp){
            return true;
        }

        return false;
    }
};