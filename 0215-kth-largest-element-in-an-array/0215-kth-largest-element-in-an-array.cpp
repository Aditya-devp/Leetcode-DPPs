class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>minhp;
        for(auto x:nums){
            minhp.push(x);
            if(minhp.size()>k)minhp.pop();
        }
        return minhp.top();
    }
};