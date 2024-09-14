#include <bits/stdc++.h> 

//Approach1 : Brute force
//sort(a.begin(, a.end())) --> TC- O(nlogn) SC - O(1)


//Approch2: By counting
void sortColors(vector<int>& nums) {
        vector<int> ans;
        //SORT --> O(nlogn)
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;

        for(int i=0; i<nums.size(); ++i){
            if(nums[i] == 0)
                ++cnt0;
        }
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] == 1)
                ++cnt1;
        }
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] == 2)
                ++cnt2;
        }

        for(int i=0; i<cnt0; ++i){
            nums[i] = 0;
        }

        for(int i=cnt0; i<cnt0+cnt1; ++i){
            nums[i] = 1;
        }

        for(int j=cnt0+cnt1; j<cnt0+cnt1+cnt2; ++j){
            nums[j] = 2;
        }
    }


//Approach3 : Using 3 pointers(In place)
 void sortColors(vector<int>& nums) {
        int l=0,m=0,h=nums.size()-1;
        while(m<=h){
            if(nums[m] == 0){
                swap(nums[l],nums[m]);
                ++l;
                ++m;
            }
            else if(nums[m] == 1)
                ++m;
            else{
                swap(nums[m],nums[h]);
                --h;
            }
                
        }
    }
