class Solution {
public:
    long long maximumTotalSum(vector<int>& m) {
        sort(begin(m),end(m));
        unordered_map<int,bool> vis;
        int curr=m[m.size()-1];
        long long res=0;
        for(int i=m.size()-1;i>=0;i--){
            if(vis[m[i]]==true){
                curr=min(curr,m[i]-1);
                if(curr<=0) return -1;
                vis[curr]=true;
                res+=curr;
                curr--;
                

            }
            else{
                curr=m[i];
                res+=curr;
                vis[curr]=true;
            }
        }
        return res;
    }
};