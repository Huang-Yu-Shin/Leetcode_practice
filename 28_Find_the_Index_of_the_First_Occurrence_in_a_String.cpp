class Solution {
public:
    int strStr(string haystack, string needle) {
        int stack_num= haystack.size();
        int needle_num= needle.size();
        int result =-1;
        for (int i =0; i<=(stack_num-needle_num);i++){
            if (haystack.substr(i, needle_num)==needle){ //haystack[i:i+needle_num-1]
                result =i;
                break;
            }
        }
        return result; 
    }
};