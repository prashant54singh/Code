class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int arr1[2001]={0};                                               
        for(int i=0; i<arr.size(); i++){
            arr1[arr[i]+1000]++;
        }
        for(int i=0; i<2001; i++){
            if(arr1[i]==0){
                continue;
            }
            else{
            for(int j=i+1; j<2001; j++){
                if(arr1[i]==arr1[j]){
                    return false;
                }
            }
            }
        }
        return true;
    }
        
    
};