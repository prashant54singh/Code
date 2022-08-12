class Solution {
public:
        int peakIndexInMountainArray(vector<int>& arr) {
        int ans=0;
        while(arr[ans]<arr[ans+1]) ans++;
        return ans;
    }

};