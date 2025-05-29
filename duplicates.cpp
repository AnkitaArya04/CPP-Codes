#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < arr.size(); i++) {
        ans = ans ^ i;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int size;
        cin >> size;
        
        vector<int> arr(size);
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        
        int ans = findDuplicate(arr);
        cout << "Duplicate element is: " << ans << endl;
    }

    return 0;
}
