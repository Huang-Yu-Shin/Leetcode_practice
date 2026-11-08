class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> rowCount(m, 0);
        vector<int> colCount(n, 0);
        for (int i = 0; i<m ; i++){
            for (int j = 0; j<n ; j++){
                if (grid [i][j]==1){
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }

        int num =0;
        for (int a = 0; a<m ; a++){
            for (int b = 0; b<n ; b++){
                if (grid [a][b]==1 && (rowCount[a]>1 ||colCount[b]>1)){
                    num ++;
                }
            }
        }
        return num;
    }
};
