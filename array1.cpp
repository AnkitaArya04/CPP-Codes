#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout << "printing the array" << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << "printing done" << endl;

}
int main(){
    int number[15];
    // cout << number[1] << endl;
    // cout << number[201] << endl;

    int second[3]={5,7,11};
    // cout << second[1];

    int third[15]={2,7};
    int n=15;
    printArray(third,n);

    // int fourth[10]={0};
    // int n=10;
    // for(int i=0;i<n;i++){
    //     cout << fourth[i] << " ";
    // }
}