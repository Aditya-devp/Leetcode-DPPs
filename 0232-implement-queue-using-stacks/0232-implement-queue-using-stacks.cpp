class MyQueue {
public:
stack <int>s;
stack<int>s2;
    MyQueue() { 
    }
    void push(int x) {
        s.push(x);
    }
    int pop() {
       
       if(s2.empty()){
            while(!s.empty()){
                s2.push(s.top());
                s.pop();
            }

        }
        int ans=s2.top();
      s2.pop();
      return ans;
    }
    
    int peek() {
       if(s2.empty()){
            while(!s.empty()){
                s2.push(s.top());
                s.pop();
            }

        }
        return s2.top();
    }
    
    bool empty() {
        return s.empty() and s2.empty();
    }
};
