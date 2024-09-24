class Solution {
public:
void rec(int ind,vector<int>& candidates, int target,vector<int>&ans,   vector<vector<int>>&ds,int last){
    if(ind==last){
        if(target==0){
            ds.push_back(ans);
        }
        return;
    }
    if(candidates[ind]<=target){
        ans.push_back(candidates[ind]);
        rec(ind,candidates,target-candidates[ind],ans,ds,last);
        ans.pop_back();
    }
    rec(ind+1,candidates,target,ans,ds,last);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>ans;
     vector<vector<int>>ds;
     rec(0,candidates,target,ans,ds,n);
     return ds;
        
    }
};