//Normal Binary Search method
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,end=nums.size();
        int mid=left+((end-left)/2);
        //condition 1 so that it does not go to infinite loop on giving 1 input as array
        if(end==1)
        {
            while(left<end)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                end=mid-1;
            }mid=left+((end-left)/2);
        }return -1;
        }
        //condition 2 for rest of the array
        else {
            while(left<=end)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                end=mid-1;
            }mid=left+((end-left)/2);
        }return -1;}
    }
};