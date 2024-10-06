class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto i:s){
            if(st.empty()){
                st.push(i);
            }
            else if(i==')' and st.top()=='(' or i=='}' and st.top()=='{' or i==']' and st.top()=='['){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        return st.empty();
        
    }
};