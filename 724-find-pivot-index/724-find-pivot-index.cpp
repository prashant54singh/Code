class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=0;
        int a=0,b=0;
        int tot=0;
        for(int i=0;i<nums.size();i++)
        {
            tot+=nums[i];
        }
        int e=tot-nums[0],j=1;
        while(s!=e && j<nums.size())
        {
            s+=nums[j-1];
            e-=nums[j];
            j++;
        }
        if(s==e)
        {
            return j-1;
        }
        else
        {
            return -1;
        }
        
    }
};