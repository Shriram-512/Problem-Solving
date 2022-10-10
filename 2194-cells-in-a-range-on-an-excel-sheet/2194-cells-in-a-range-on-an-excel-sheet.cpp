class Solution {
public:
    vector<string> cellsInRange(string s) {
//         char column1=s[0];
//         char row1=s[1];
//         char column2=s[3];
//         char row2=s[4];
//         string str;
//         for(int i=s[0]; i<s[3]; i++)
//         {
//             for(int j=s[1]; j<s[4]; j++)
//             {
                
//             }
//         }
        
        
        vector<string> ans;

        for(char i= s[0]; i<=s[3]; ++i) {
            
             for(char j= s[1]; j<=s[4]; ++j) {
                
                 ans.push_back({i, j});
                 
             }   
                       
        }
        
        
        return ans;
    }
};