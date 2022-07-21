class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
     
        unordered_map<int,int> m;
        vector<int> ans;
        
        for(int i=0;i<n.size();i++)
        {
            if(m.find(t-n[i])!=m.end())
            {
                ans.push_back(i);
                ans.push_back(m[t-n[i]]);
                // break;
            }
            
            else
            {
                m[n[i]]=i;
            }
        }
        
        return ans;
        
    }
};