class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum =0; 
        int product=1;
        int i=1;
        while(n!=0)
        {
            int a=n%10;
            sum+=a;
            product=product*a;
            n=n/10;
            
        }
        return product-sum;
        
    }
    
};