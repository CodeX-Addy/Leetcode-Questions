class Solution {
public:

    int expand(string s, int i, int j){
        int cnt = 0;
        while( i>=0 && j<s.length() && s[i]==s[j]){
                i--;
                j++;
                cnt++;
        }
        return cnt;
    }
    int countSubstrings(string s) {
         int totalCnt = 0;
         for(int i=0; i<s.length(); ++i){
             int odd = expand(s, i, i);
             int even = expand(s, i, i+1);

             totalCnt += odd + even;
          }
          return totalCnt;

        }      
};
