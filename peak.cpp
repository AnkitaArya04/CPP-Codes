#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0, e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e) {
            if (arr[mid] < arr[mid + 1]) {
                s = mid + 1;
            } else {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
};

int main() {
    Solution sol;
    
    // Example mountain array
    vector<int> mountain = {0, 2, 5, 7, 6, 3, 1};

    int peakIndex = sol.peakIndexInMountainArray(mountain);
    
    cout << "Peak Index: " << peakIndex << endl;
    cout << "Peak Element: " << mountain[peakIndex] << endl;

    return 0;
}
