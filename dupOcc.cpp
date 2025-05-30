#include <iostream>
#include <vector>
#include <cmath> // for abs
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[abs(nums[i]) - 1] < 0) {
                ans.push_back(abs(nums[i]));
            }
            nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Sample input
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> duplicates = sol.findDuplicates(nums);

    cout << "Duplicates: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
