#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int tar) {
        int st = 0, end = arr.size() - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (arr[mid] == tar) {
                return mid;
            }

            // Check if left half is sorted
            if (arr[st] <= arr[mid]) {
                if (arr[st] <= tar && tar <= arr[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } 
            // Right half is sorted
            else {
                if (arr[mid] <= tar && tar <= arr[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = sol.search(arr, target);

    if (index != -1) {
        cout << "Target " << target << " found at index: " << index << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
