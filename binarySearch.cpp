
int solve(int *arr, int s, int e, int k){
    // element is not present
    if(s>e)
     return -1;
    int mid = s + (e-s)/2;
    if(arr[mid] == k)// if element is present
     return mid;
     
    if(arr[mid] < k)
     return solve(arr, mid+1, e, k);
     
    return solve(arr, s, mid-1, k);
}

int binarySearch(int *input, int n, int val)
{
    int ans = solve(input, 0, n-1, val);
}
