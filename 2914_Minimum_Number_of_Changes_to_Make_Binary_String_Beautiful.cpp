class Solution {
public:
    int minChanges(string s) {  //每個 substring 都必須是偶數長度，所以每個 substring 的起點和終點都會落在偶數邊界
        int count = 0;
        for (int i = 0; i < s.size(); i += 2) {
            if (s[i] != s[i + 1]) {
                count++;
            }
        }

        return count;
    }
};