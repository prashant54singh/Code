class Solution {
public:
    int mySqrt(int x) {
        int ans=1;
        int s=0,e=x;
        long long int answer=0;
        long long int mid=s+(e-s)/2;
        if(x==1)
        {
            return 1;
        }
        while(s<e)
        {
            if (mid*mid==x)
            {
                return mid;
            }
            else if(mid*mid<x)
            {
                answer =mid;
                s=mid+1;
            }
            else
            {
                e=mid;
            }mid=s+(e-s)/2;
        }return answer;
    }
};