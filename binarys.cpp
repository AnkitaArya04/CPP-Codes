#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int tar) {
    int start = 0, end = arr.size() - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2; // safer way to calculate mid

        if(arr[mid] == tar) {
            return mid; // element found
        }
        else if(tar < arr[mid]) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return -1; // element not found
}

int main(){
    vector<int> arr1 = {1, 2, 3, 4, 6, 7, 8};
    int tar1 = 4;
    vector<int> arr2 = {67, 78, 79, 90, 100, 123, 156};
    int tar2 = 123;

    int ans1 = binarySearch(arr1, tar1);
    cout << "Index of " << tar1 << " in arr1: " << ans1 << endl;

    int ans2 = binarySearch(arr2, tar2);
    cout << "Index of " << tar2 << " in arr2: " << ans2 << endl;

    return 0;
}
