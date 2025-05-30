#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int size = arr.size();
        sort(arr.begin(), arr.end());
        int i = 0;

        while (i < size) {
            int count = 1;
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                } else {
                    break;
                }
            }
            ans.push_back(count);
            i = i + count;
        }

        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size() - 1; i++) {
            if (ans[i] == ans[i + 1]) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution sol;

    // Example test case
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    bool result = sol.uniqueOccurrences(arr);

    cout << "Unique Occurrences: " << (result ? "true" : "false") << endl;

    return 0;
}
