class Solution {
public:


vector<int>prevSmaller(vector<int>&arr){
    vector<int>ans(arr.size());
    stack<int>st;
    st.push(-1); //Initially push -1 on stack

    for(int i=0; i<arr.size(); i++){ //Starting from end
        int curr = arr[i];
        while(st.top() != -1 && arr[st.top()] >= curr){ //Till top element becomes < curr
            st.pop();
        }
        ans[i] = st.top(); //Store top(next smallest) in ans
        st.push(i); //push curr because it could be the answer for another element
    }
    return ans;
}

    
vector<int>nextSmaller(vector<int>&arr){
    vector<int>ans(arr.size());
    stack<int>st;
    st.push(-1); //Initially push -1 on stack

    for(int i=arr.size()-1; i>=0; i--){ //Starting from end
        int curr = arr[i];
        while(st.top() != -1 && arr[st.top()] >= curr){ //Till top element becomes < curr
            st.pop();
        }
        ans[i] = st.top(); //Store top(next smallest) in ans
        st.push(i); //push curr because it could be the answer for another element
    }
    return ans;
}

    int largestRectangleArea(vector<int>& heights) {
        vector<int>next = nextSmaller(heights);
        for(int i=0; i<next.size(); i++){
            if(next[i] == -1)
                next[i] = next.size();
        }
        vector<int>prev = prevSmaller(heights);
        int maxArea = INT_MIN;
        for(int i=0; i<heights.size(); i++){
            int width = next[i] - prev[i] - 1;
            int length = heights[i];
            int area = width*length;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};
