class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_set<string>mp;
        for(auto i:bannedWords){
          mp.insert(i);
        }
        int count=0;
        for(auto i:message){
            if(mp.find(i)!=mp.end()){
               count++;
               if(count>=2){
                return true;
               }
            }

        }
        return false;
        
    }
};