class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> num;
       
        int great=0;
        for(int i=0; i<accounts.size(); i++)
        {
             int sum = 0;
            for(int j=0; j<accounts[i].size(); j++)
            {
                sum = sum + accounts[i][j];
            }
            if(sum>great)
            {
                great = sum;
            }
        }
        return great;
    }
};