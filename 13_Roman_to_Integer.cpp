class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        }; 

        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && roman[s[i]] < roman[s[i + 1]]) {//注意如果是反過來是不能宣告的
                ans -= roman[s[i]];
            }
            else {
                ans += roman[s[i]];
            }
        }

        return ans;
    }
};

class Solution {
public:

    int num(char c){
        if(c=='I'){
            return 1;
        }
        else if(c=='V'){
            return 5;
        }
        else if(c=='X'){
            return 10;
        }
        else if(c=='L'){
            return 50;
        }
        else if(c=='C'){
            return 100;
        }
        else if(c=='D'){
            return 500;
        }
        else{
            return 1000;
        }
    }

    int romanToInt(string s) {
        int sum=0,index=0;
        while(index<s.size()-1){
            if(num(s[index])<num(s[index+1])){

            sum-=num(s[index]);
            }
            else
            sum+=num(s[index]);
            index++;
        }
        sum+=num(s[s.size()-1]);
        return sum;
    }
};