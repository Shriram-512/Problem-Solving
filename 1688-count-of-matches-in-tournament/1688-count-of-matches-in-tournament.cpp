class Solution {
public:
    int numberOfMatches(int n) {
        // wrong answer
        
        // int nmatches=0;
        // int temp =0;
        //     if(n%2==0)
        //     {
        //         while(n>0)
        //         {
        //             nmatches= nmatches + n/2;
        //             n = n/2;
        //         }
        //     }
        //     else
        //     {
        //         while(n>0)
        //         {
        //             nmatches = nmatches + (n-1)/2;
        //             n = n/2;
        //         }
        //         n;
        //     }
        
        
        //sanket approach
        int match=  0;
        int tmatch = 0;
//         while(n > 1 )
//         {
//             if(n % 2 == 0)
//             {
//                 match =  n / 2;
//                 n -= match;   
//             }
//             else if(n % 2 == 1)
//             {
//                 match =  (n / 2) + 1;
//                  n -= match;   

//             }
//             tmatch += match;
        // }
        return n-1;
    }
};