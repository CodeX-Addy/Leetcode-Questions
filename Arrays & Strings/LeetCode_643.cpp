class Solution {
public:

    //It will gives TLE --> O(n2)
    double bruteForce(vector<int>& nums, int k){
        int maxSum = INT_MIN;
        int i=0, j = k-1;
        while(j < nums.size()){
            int sum = 0;
            for(int y=i; y<=j; ++y){
                sum += nums[y];
            }
            maxSum = max(maxSum, sum);
            ++i, ++j;
        }
        double maxAvg = maxSum / (double)k;
        return maxAvg;
    }

    double slidingWindow(vector<int>& nums, int &k){
        int i=0, j=k-1;
        int sum = 0;
        for(int y=i; y<=j; ++y){
            sum += nums[y];
        }
        int maxSum = sum;
        j++;
        while(j < nums.size()){
            sum -= nums[i++];
            sum += nums[j++];
            maxSum = max(maxSum, sum);
        }
        double maxAvg = maxSum / (double)k;
        return maxAvg;
    }

    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    }
};
