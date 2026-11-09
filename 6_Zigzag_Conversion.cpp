class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1){
            return s;
        }
        vector<string> rows(numRows);
        bool positive =true;
        int row = 0;
        for (int i = 0; i < s.length(); i++) {
            if (positive == true && row >=0 && row<numRows){
                rows[row] += s[i];
                if (row==numRows-1){
                    positive =false;
                    row--;
                }
                else {
                    positive =true;
                    row++;
                }
            }
            else if (positive == false && row >=0 && row<numRows){
                rows[row] += s[i];
                if (row==0){
                    positive =true;
                    row++;
                }
                else {
                    positive =false;
                    row--;
                } 
            }

        }
        string result = "";
        for (int i = 0; i < numRows; i++) {
            result += rows[i];
        }
        return result;
    }
};

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) return s;

        string res;
        // Pre-allocate the exact memory we need to prevent ANY reallocations
        res.reserve(s.length()); 
        
        int cycleLen = 2 * numRows - 2;

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j + i < s.length(); j += cycleLen) {
                // Add the main character for this cycle
                res += s[j + i]; 
                
                // For the inner rows, we have an extra character on the diagonal going up
                if (i != 0 && i != numRows - 1 && j + cycleLen - i < s.length()) {
                    res += s[j + cycleLen - i];
                }
            }
        }
        return res;
    }
};