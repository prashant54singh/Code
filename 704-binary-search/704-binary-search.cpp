class Solution {
public:
    int search(vector<int>& nums, int target) {
        int str=0,end=nums.size();
        int mid=str+((end-str)/2);
        if(end==1)
        {
            while(str<end)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target){
                str=mid+1;
            }
            else{
                end=mid-1;
            }mid=str+((end-str)/2);
        }return -1;
        }
        
        else {
            while(str<=end)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target){
                str=mid+1;
            }
            else{
                end=mid-1;
            }mid=str+((end-str)/2);
        }return -1;}
    }
};