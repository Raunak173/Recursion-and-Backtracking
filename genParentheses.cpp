#include <bits/stdc++.h>
using namespace std;

vector <string> valid;

void gen(string &s,int open,int close){ //Count of opening and closing brackets left.
    if(open==0 and close==0){
        valid.push_back(s);
        return;
    }
    if(open>0){
        s.push_back('(');
        gen(s,open-1,close);
        s.pop_back(); //Backtracking
    }
    if(close>0){
        if(open<close){
            s.push_back(')');
            gen(s,open,close-1);
            s.pop_back(); //Backtracking
        }
    }
}

int main(){
    int n;
    cin>>n;
    string s="";
    gen(s,n,n);
    for(auto x:valid){
        cout<<x<<" ";
    }
    return 0;
}