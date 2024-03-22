#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void seggregate(vector<int>&v){
    int s = 0;
    int e = v.size()-1;
    while(s<e){
        if(v[s] < 0)
            ++s;
        else if(v[e] >= 0)
            --e;
        else{
            swap(v[s],v[e]);
            ++s;
            --e;
        }
    }
}


int main(){
    vector<int> v = {4,-1,2,-3,5,6};
    
    //sort(v.begin(), v.end());
    seggregate(v);

    for(int i : v)
        cout << i << " ";


}