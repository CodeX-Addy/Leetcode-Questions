class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int ans = 0;

        for(int i=0; i<s.size(); ++i){
            char ch = s[i];
            if(ch == '('){
                st.push(ch);
                ++ans;
            }
            else{
                if(!st.empty()){
                    st.pop();
                    ans--;
                }
                else
                    ++ans;
            }
        }
        return ans;
    }
};
