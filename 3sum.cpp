#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;

        for(int i = 0; i < nums.size(); i++) {
            // Skip duplicates for the first element
            if(i > 0 && nums[i] == nums[i - 1]) continue;

            int first = nums[i];
            int start = i + 1;
            int end = nums.size() - 1;

            while(start < end) {
                int sum = first + nums[start] + nums[end];

                if(sum == 0) {
                    output.push_back({first, nums[start], nums[end]});
                    start++;
                    end--;

                    // Skip duplicates
                    while(start < end && nums[start] == nums[start - 1]) start++;
                    while(start < end && nums[end] == nums[end + 1]) end--;

                } else if(sum < 0) {
                    start++;
                } else {
                    end--;
                }
            }
        }

        return output;
    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    Solution sol;
    vector<vector<int>> result = sol.threeSum(nums);

    cout << "Triplets that sum to zero:\n";
    for(const auto& triplet : result) {
        cout << "[ ";
        for(int num : triplet) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
