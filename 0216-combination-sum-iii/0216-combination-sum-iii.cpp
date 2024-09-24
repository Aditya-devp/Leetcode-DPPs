class Solution {
public:
void rec(int ind,vector<int>&nums,vector<int>&ans,vector<vector<int>>&ds,int k,int target,int last){
    if(ind==last){
        if(k==0 and target==0){
            ds.push_back(ans);
        }
        return ;
    }

    if(nums[ind]<=target){
        ans.push_back(nums[ind]);
        rec(ind+1,nums,ans,ds,k-1,target-nums[ind],last);
        ans.pop_back();
    }
    rec(ind+1,nums,ans,ds,k,target,last);


}
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int>ans;
        vector<vector<int>>ds;
        vector<int>nums={1,2,3,4,5,6,7,8,9};
        int last=nums.size();
        rec(0,nums,ans,ds,k,n,last);
        return ds;

        
    }
};