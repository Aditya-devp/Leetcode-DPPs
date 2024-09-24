class Solution {
public:
void rec(int ind,vector<int>&nums,vector<int>&result,vector<vector<int>>&ds,unordered_map<int,bool>&mp){
    if(result.size()==nums.size()){
        ds.push_back(result);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(!mp[i]){
            result.push_back(nums[i]);
            mp[i]=1;
             rec(ind+1,nums,result,ds,mp);
             mp[i]=0;
             result.pop_back();
        }

    }
    
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>result;
        vector<vector<int>>ds;
        unordered_map<int,bool>mp;
        rec(0,nums,result,ds,mp);
        return ds;
        
    }
};