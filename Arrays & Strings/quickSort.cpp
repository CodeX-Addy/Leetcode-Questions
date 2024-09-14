
#include <iostream>
using namespace std;
void quickSort(int arr[], int s, int e){
     //base case
    if(s>=e) return;
    int i=s-1;
    int j=s;
    int pivot = e;
    
    while(j<pivot){
        if(arr[j]<arr[pivot]){
            ++i;
            swap(arr[i], arr[j]);
        }
        ++j;
    }
    ++i;
    swap(arr[i], arr[pivot]);
    
    quickSort(arr,s,i-1);
    quickSort(arr, i+1, e);
}
int main() {
    int arr[] = {8,7,5,9,2,3,1,4};
    int n = sizeof(arr)/sizeof(int);
    quickSort(arr, 0, n-1);
    for(int i:arr){
        cout << i << " ";
    }

    return 0;
}
