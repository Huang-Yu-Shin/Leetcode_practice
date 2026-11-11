class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long individualcost = 1LL * cost1 * need1 + 1LL * cost2 * need2;
        long long combinationcost = 1LL * costBoth* max(need1,need2);
        long long comindcost = 0;
        if (need1 >= need2){
            comindcost = 1LL * costBoth* need2 + 1LL * cost1 * (need1-need2); 
        }
        else{
            comindcost = 1LL * costBoth* need1 + 1LL * cost2 * (need2-need1); 
        }
        return min (individualcost, min(combinationcost,comindcost));
    }
};

//use 1LL to let the calculation use long long type