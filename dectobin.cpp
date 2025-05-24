#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int ans=0;
    int i=0;
    while (n!=0)
    {
        int bit=n & 1;                      // Get the last bit of n
        ans=(bit*pow(10,i)) + ans;       // Convert to decimal-like binary number
        n=n>>1;                           // Right shift n by 1 (equivalent to n / 2)
        i++;
    }
    cout << "Answer is : " << ans << endl;
}
