#include <bits/stdc++.h>
using namespace std;

string rev(string s){
    if(s.size()==0) return s;
    int n=s.size();
    char temp=s[n-1];
    s.pop_back();
    return temp+rev(s);
}

int main(){
    string s;
    cin>>s;
    cout<<rev(s);
    return 0;
}