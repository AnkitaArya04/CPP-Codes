#include<iostream>
using namespace std;
int digitSum(int n){
    int digit_sum=0;
    while(n>0){
        int last=n%10;
        digit_sum+=last;
        n=n/10;
    }
    return digit_sum;
}
int main(){
    cout << digitSum(123) << endl;
    return 0;
}