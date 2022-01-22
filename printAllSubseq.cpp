#include <bits/stdc++.h>
using namespace std;

void solve(string op,int i,string ip){
    if(i==ip.size()){
        cout<<op<<" ";
        return;
    }
    solve(op,i+1,ip);
    op.push_back(ip[i]);
    solve(op,i+1,ip);
}

int main(){
    string s;
    cin>>s;
    string op="";
    solve(op,0,s);
    return 0;
}