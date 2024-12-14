
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ll;
        //Making vector ll consisting linkedlist values
        while(head){
            ll.push_back(head->val);
            head = head->next;
        }  

        stack<int>st;
        for(int i=0; i<ll.size(); i++){
            while(!st.empty() && ll[i] > ll[st.top()]){ //if element greater than top arrives
                int top = st.top(); 
                st.pop();
                ll[top] = ll[i];
            }
            st.push(i);
        }
        ll[ll.size() - 1] = 0; //Last cell of vector
        //Remaining cell that do not have next greater
        while(!st.empty()){
            ll[st.top()] = 0;
            st.pop();
        }
        return ll;
    }
};
