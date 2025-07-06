#include<iostream>
using namespace std;
int binary_to_Dec(int binNum){
    int pow=1,ans=0;
    while(binNum>0){
        int rem=binNum%10;
        ans+=(rem*pow);
        binNum/=10;
        pow=pow*2;
    }
    return ans;
}
int main(){
    cout<<binary_to_Dec(110010) << endl;
}