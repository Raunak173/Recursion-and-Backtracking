#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void gen(vector <int> &subset,int i,vector <int> &nums){
    if(i==nums.size()){
        ans.push_back(subset);
        return;
    } 
    gen(subset,i+1,nums);
    subset.push_back(nums[i]);
    gen(subset,i+1,nums);
    subset.pop_back(); //Backtracking
}
int main(){
    int n;
    cin>>n;
    vector <int> nums(n,0);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector <int> empty; //First our subset is empty.
    gen(empty,0,nums);
    for(auto subset:ans){
        for(auto el:subset){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    return 0;
}