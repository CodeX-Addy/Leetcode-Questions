#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    vector<int> v = {4,-1,2,-3,5,6};

    sort(v.begin(), v.end());
    for(int i : v)
        cout << i << " ";

}