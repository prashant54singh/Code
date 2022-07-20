class Solution {
public:
    int bitwiseComplement(int n) {
        if (n==0)
        {
            return 1;
        }
        int ans =0; int factor =1;
        while (n>0)
        {
            
            ans+=factor *(n%2==0 ? 1 : 0);
            factor *= 2;
            n/=2;
        }
        
     return ans;   
    }
};