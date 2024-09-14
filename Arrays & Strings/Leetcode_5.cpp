//O(n^3) complexity
class Solution {
public:

    bool isPalindrome(string&s, int st, int e){
        while(st < e){
            if(s[st] != s[e]) return 0;
            st++, e--;
        }
        return 1;
    }

    string longestPalindrome(string s) {
        string ans = "";
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                if(isPalindrome(s, i, j)){
                    string t = s.substr(i, j-i+1);
                    ans = t.size() > ans.size() ? t : ans;
                }
            }
        }
        return ans;
    }
};
