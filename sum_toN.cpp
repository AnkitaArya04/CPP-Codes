#include<iostream>
using namespace std;

int sumToN(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n=3;
    cout<< sumToN(n) << endl;
}