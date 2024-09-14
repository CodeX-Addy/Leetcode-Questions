class Solution {
public:

    int pivot(vector<int>&arr){

        int s = 0, e = arr.size()-1;
        while(s<=e){
            if(s==e)
                return s;
            int mid = s + (e-s)/2;
            if(mid-1>=0 && arr[mid] < arr[mid-1])
                return mid - 1;
            else if(mid+1<arr.size() && arr[mid] > arr[mid+1])
                return mid;
            else if(arr[s] > arr[mid])
                e = mid - 1;
            else
                s = mid + 1;
        }
        return -1;
    }

    int binarysearch(vector<int>&arr, int s, int e, int k){
        while(s<=e){
            int mid = s + (e-s)/2;
            if(arr[mid] == k)
                return mid;

            if(arr[mid] < k)
                s = mid + 1;
            else
                e = mid - 1;

        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivotIndex = pivot(nums);
        int ans = -1;
        if(target>=nums[0] && target<=nums[pivotIndex])
            return ans = binarysearch(nums, 0, pivotIndex, target);
        else
            return ans = binarysearch(nums, pivotIndex+1, nums.size()-1, target);
        return ans;
    
    }
};
