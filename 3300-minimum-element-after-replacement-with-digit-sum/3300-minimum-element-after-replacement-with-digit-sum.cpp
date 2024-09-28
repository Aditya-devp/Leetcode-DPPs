class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            int element=nums[i];
            while(element!=0){
                int a=element%10;
                sum+=a;
                element/=10;
            }
            ans.push_back(sum);
        }

        sort(ans.begin(),ans.end());
        return ans[0];
        
    }
};