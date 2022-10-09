class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        int temp =n;
        while(n>0)
        {
            temp=n%10;
            n = n/10;
            sum = sum+temp;
            product= product*temp;
        }
        return product - sum;
    }
};