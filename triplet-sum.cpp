#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// 2 Ponter approach
	vector<vector<int>> ans;
	sort(arr.begin(), arr.end());

	for(int i=0; i<n-2 ; i++){
		int left = i+1;
		int right = n-1;

		while(left<right){
			if(arr[i]+arr[left]+arr[right] == K){
                ans.push_back({arr[i], arr[left], arr[right]});

				while(arr[left] == arr[left+1] && left<right )
					left++;
				
				while(arr[right] == arr[right-1] && left<right )
					right--;
				
				left++;
				right--;
            }
			else if( arr[i]+arr[left]+arr[right]<K)
				left++;
			else right--;
		}

		while( arr[i]==arr[i+1] && i+1<n)
			i++;
	}

	return ans;

}
