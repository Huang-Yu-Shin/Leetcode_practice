class Solution {
public:
    string intToRoman(int num) {
        vector<string> roman = {"I","V","X","L","C","D","M"};
        string final;
        if (num<4000 && num>0){
            int t = 0;
            while (num>0){
                int digit = num %10;
                if  (digit == 4){
                    final = roman[t*2] +roman[t*2+1]+final;
                }
                else if (digit == 9){
                    final = roman[t*2] +roman[t*2+2]+final;
                }
                else if (digit == 1 ||digit == 2 ||digit == 3 ){
                    for (int i = 0; i < num % 10; i++) {
                        final = roman[t*2] + final;
                    } //string不能直接用乘法重複
                }
                else if (digit == 6 ||digit == 7 ||digit == 8){
                    for (int i = 0; i < (num % 10-5); i++) {
                        final = roman[t*2] + final;
                    }
                    final =roman[t*2+1]+final; 
                }
                else if (digit ==5){
                    final = roman[t*2+1]+final;
                }
                
                t++;
                num = num/10;
            }
            
        }
        return final;
    }
};

#include <string>
#include <vector>

class Solution {
public:
    std::string intToRoman(int num) {
        // Values sorted in descending order including subtractive combinations
        const int values[] = {
            1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
        };
        const std::string symbols[] = {
            "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
        };

        std::string result = "";

        for (int i = 0; i < 13; ++i) {
            while (num >= values[i]) {
                num -= values[i];
                result += symbols[i];
            }
        }

        return result;
    }
};