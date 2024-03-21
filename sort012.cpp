#include <bits/stdc++.h> 

//Approach1 : Brute force
//sort(a.begin(, a.end())) --> TC- O(nlogn) SC - O(1)


//Approach2: By counting
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


void sort012(int *arr, int n)
{
   int s=0,e=n-1,mid=0;
   while(mid<=e){
      if(arr[mid]==0){
         arr[mid] = arr[s];
         arr[s] = 0;
         s++;
         mid++;
      }
      else if(arr[mid]==1)
      mid++;
      else if(arr[mid]==2){
         arr[mid] = arr[e];
         arr[e] = 2;
         e--;
      }
   }
}
