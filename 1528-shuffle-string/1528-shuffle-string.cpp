class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string suf(n, 'a');
        for(int i=0; i<n; i++)
        {
            suf[indices[i]]= s[i];
        }
        return suf;
    }
};