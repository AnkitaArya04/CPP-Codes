#include<iostream>
using namespace std;
int decimatlToBin(int decNum){
    int pow=1,ans=0;
    while(decNum>0){
        int rem=decNum%2;
        decNum/=2;
        ans+=(rem*pow);
        pow=pow*10;
    }
    return ans;
}
int main(){
    int n=8;
    cout << decimatlToBin(n) << endl;
    return 0;
}