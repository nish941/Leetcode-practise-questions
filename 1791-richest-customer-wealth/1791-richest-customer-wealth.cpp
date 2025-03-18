#include <vector>
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int p = accounts.size();
        int q = accounts[0].size();
        int count=0;
        int m=0;
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                count+= accounts[i][j];
            }
            m = max(m,count);
            count=0;
        }
        return m;
    }
};