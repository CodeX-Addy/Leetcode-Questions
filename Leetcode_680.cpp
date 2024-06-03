class Solution {
public:
    bool checkPalindrome(string&s, int i, int j){
        while(i<=j){
            if(s[i] != s[j])
                return 0;
            else{
                ++i;
                --j;
            }
        }
        return 1;
    }

    bool validPalindrome(string s) {
        int i=0;
        int j = s.length()-1;

        while(i < j){
            if(s[i] == s[j]){
                ++i;
                --j;
            }
            else{
                //s[i] != s[j]
                return checkPalindrome(s, i+1, j) || checkPalindrome(s, i, j-1);
            }
        }
        return 1;
    }
};
