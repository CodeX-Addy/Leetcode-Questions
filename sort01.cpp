#include <iostream>
using namespace std;
void sortOne(int arr[], int n){
    int l=0,r=n-1;
    while(l<r){
        while(arr[l]==0 && l<r){
            l++;
        }
        while(arr[r]==1 && l<r){
            r--;
        }
        while(arr[l]==1 && arr[r]==0 && l<r){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
    }
}


int main() {
    int arr[5];
    cout << "Please enter the elements in 0 & 1 format!" << endl;
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    sortOne(arr, 5);
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
