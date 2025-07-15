#include<iostream>
#include<vector>
using namespace std;
int binarySearchRec(vector<int> arr,int target,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(target>arr[mid]){
            return binarySearchRec(arr,target,mid+1,end);
        }else if(target<arr[mid]){
            return binarySearchRec(arr,target,st,mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr1={12,23,34,43,54,65,78};
    int tar=23;
    // cout << binarySearchRec(arr1,tar);
    vector<int> arr2={12,32,43,53,64,75,83,98};
    int tar2=64;
    // int start=arr2[0];
    int end=arr2.size()-1;
    cout << binarySearchRec(arr2,tar2,0,arr2.size());

    return 0;

}