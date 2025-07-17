#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1, end = arr.size() - 2;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
                return mid;
            } else if (arr[mid - 1] < arr[mid]) { // increasing => go right
                st = mid + 1;
            } else { // decreasing => go left
                end = mid - 1;
            }
        }
        return -1; // in case no peak is found (shouldn't happen in a valid mountain array)
    }
};

int main() {
    Solution sol;
    vector<int> mountain = {0, 2, 4, 7, 6, 3, 1};

    int peakIndex = sol.peakIndexInMountainArray(mountain);

    if (peakIndex != -1) {
        cout << "Peak found at index: " << peakIndex << endl;
        cout << "Peak value: " << mountain[peakIndex] << endl;
    } else {
        cout << "No peak found in the array." << endl;
    }

    return 0;
}
