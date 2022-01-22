// Find no of ways to invite n people to your party, single or in pairs.
//Mathematically we can say nC1+nC2 choices!!!

#include <bits/stdc++.h>
using namespace std;

int party(int n){
    if(n<=1) return 1;
    //Single
    int w1 = party(n-1);
    //Pair
    int w2 = (n-1)*party(n-2);
    return w1+w2;
}

int main(){
    int n;
    cin>>n;
    cout<<party(n);
    return 0;
}