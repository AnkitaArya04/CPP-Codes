#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum2(vector<int> num,int target){
    int n=num.size();
    vector<int> ans;
    int i=0,j=n-1;
    while(i<j){
        int pairSum=num[i]+num[j];
        if(pairSum>target){
            j--;
        }else if(pairSum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
int main(){
    vector<int> num={2,7,11,15};
    int target=26;
    vector<int> ans=pairSum2(num,target);
    cout << ans[0] << "," << ans[1] << endl;
}