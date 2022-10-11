class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);  //int to string conversion
        sort(s.begin(),s.end());  //sorting the string
        int res = (s[0] - '0') * 10 + s[3] - '0'; //  first * 10 + fourth
        res += (s[1] - '0') * 10 + s[2] - '0';   //  second * 10 + third
        return res;
    }
};