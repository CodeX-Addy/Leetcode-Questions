#include<iostream>
#include<unordered_map>
using namespace std;

//Assuming size of s and t strings are same
bool isomorphic(string &s, string &t) {
    unordered_map<char, char>mp;
    unordered_map<char, bool>visited;

    for(int i=0; i<s.size(); ++i){
        if(!mp[s[i]] && !visited[t[i]]){
            mp[s[i]] = t[i];
            visited[t[i]] = 1;
        }
    }

    //Checking for isomorphism
    for(int i=0; i<s.size(); i++){
        if(mp[s[i]] != t[i])
            return 0;
    }
    return 1;
}

int main(){
    string s = "foo";
    string t = "bar";
    if(isomorphic(s,t))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}