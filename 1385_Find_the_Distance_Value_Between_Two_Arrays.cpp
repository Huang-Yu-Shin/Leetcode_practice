class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count =0;
        for (int i = 0 ; i < arr1.size(); i++){
            bool inrange = false;
            for (int j = 0 ; j < arr2.size(); j++){
                if (abs(arr1[i]-arr2[j])<=d) inrange=true;
            }
            if (inrange==false) count++;
        }
        return count ;

    }
};


class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ret = 0;
        for (auto n : arr1) {
            for (auto m : arr2) {
                if (abs(m-n) <= d) {
                    goto end;
                }
            }
            ret++;
            end:
        }
        return ret;
    }
};