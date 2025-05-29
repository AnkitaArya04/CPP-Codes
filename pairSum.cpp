#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    vector<vector<int>> result = pairSum(arr, target);

    cout << "Pairs with sum " << target << ":\n";
    for (auto pair : result) {
        cout << pair[0] << " " << pair[1] << endl;
    }

    return 0;
}
