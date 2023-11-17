class MinStack {
public: //we need to perform all operation in O(1)
    
    vector<pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){ // when no elements are present in stack
            pair<int, int> p;
            p.first = val;
            p.second = val;
            st.push_back(p);
        }
        else{
            pair<int, int> p;
            int minvalue = st.back().second;
            int minInPair = min(minvalue, val);
            p.second = minInPair;
            p.first = val;
            st.push_back(p);
        }
    }
    
    void pop() {
        st.pop_back();
    }
    
   int top() {
       pair<int,int> rightMost = st.back();
       return rightMost.first;
  
    }
    
    int getMin() {
       pair<int,int> rightMost = st.back();
       return rightMost.second;
  
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
