//Check if an array is sorted(strictly inc)

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector <int> v){
    //If array has 1 element that means it is sorted.
    if(v.size()==1) return true;
    int n=v.size();
    if(v[n-1]<v[n-2]) return false; //Case checking
    v.pop_back();
    isSorted(v); //Passing the smaller array
}

int main(){
    int n;
    cin>>n;
    vector <int> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<std::boolalpha;
    cout<<isSorted(v); 
    return 0;
}