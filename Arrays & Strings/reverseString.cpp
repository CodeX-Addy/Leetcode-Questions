class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int e = s.size()-1;
        while(st<e){
            swap(s[st++], s[e--]);
        }
    }
};

// Using recursion
#include <bits/stdc++.h> 

void reverseString(string& str, int i, int j){
    if(i>j)
     return;
    swap(str[i],str[j]);
    i++;
    j--;
    
    reverseString(str, i, j);
}
string reverseString(string str)
{
	reverseString(str,0,str.length()-1);
	return str;
}
