#include <bits/stdc++.h>
using namespace std;

void printKeypad(string num,int idx,string op,vector <string> &keypad){
    if(idx==num.size()){
        cout<<op<<" ";
        return;
    }
    char currChar = num[idx];
    string mapping = keypad[currChar-'0']; //Suppose if we have 2, it will map to def
    for(int i=0;i<mapping.size();i++){
        printKeypad(num,idx+1,op+mapping[i],keypad);
    }
}

int main(){
    vector <string> keypad {".","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
    string num;
    cin>>num;
    printKeypad(num,0,"",keypad);    
    return 0;
}