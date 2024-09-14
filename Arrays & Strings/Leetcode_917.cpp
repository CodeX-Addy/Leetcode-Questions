#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverseOnlyLetters(string &str){
    int s = 0, e = str.size()-1;
    while(s<e){
        if(isalpha(str[s]) && isalpha(str[e])){
            swap(str[s], str[e]);
            ++s;
            --e;
        }
        else if(!isalpha(str[s]))
            ++s;
        else
            --e;
    }
}

int main(){
    string st = "aditya&";
    reverseOnlyLetters(st);
    cout << st << endl;
}