class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> result;
        int n = candies.size();
        vector<bool> res(n);
       
   
        for(int n:candies)
        {
            result.push_back(n);
        }
        sort(result.begin(), result.end());
        for(int i=0; i<n; i++)
        {
                 if(candies[i]+extraCandies >=result[n-1])
                 {
                     res[i] = true;
                 }
                else 
                {
                    res[i]= false;
                }
        }
      return res;
    }
};