#include <bits/stdc++.h>
using namespace std;

void print(string ip,string op){
    if(ip.size()==0){
        cout<<op<<" ";
        return;
    }
    for(int i=0;i<ip.size();i++){
        char currChar=ip[i];
        //Suppose curr char is b.
        //abc -> ac
        string newStr = ip.substr(0,i)+ip.substr(i+1); //Substr takes two params pos and length
        print(newStr,op+currChar);
    }
}

int main(){
    string s;
    cin>>s;
    string op="";
    print(s,op);
}