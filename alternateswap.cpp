#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[] ,int n){
    for(int i=0;i<n;i+=2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8]={5,2,9,4,7,6,1,5};
    int odd[5]={11,33,9,76,3};
    swapAlternate(even,8);
    printArray(even,8);
    swapAlternate(odd,5);
    printArray(odd,5);
}