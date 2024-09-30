class CustomStack {
public:
vector<int>v;
int size=0;
  int count=0;
    CustomStack(int maxSize) {

        size=maxSize;
   
    }
  
    void push(int x) {
        if(count<size){
            ++count;
        v.push_back(x);
        }

        
    }
    
    int pop() {
        if(v.empty())return -1;
        int a=v.back();
        v.pop_back();
        count--;
        return a;
        
    }
    
    void increment(int k, int val) {
        if(v.size()<k){
            for(int i=0;i<v.size();i++){
                v[i]=v[i]+val;
            }
        }
        else{
            for(int i=0;i<=k-1;i++){
                v[i]=v[i]+val;
            }
        }
        
    }
};

