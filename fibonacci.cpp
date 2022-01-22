#include <bits/stdc++.h>
using namespace std;

// 0 1 1 2 3 5 8 13 ...
//Program to return the nth number of this series.

int fib(int n){
    if(n==1) return 0;
    if(n==2 or n==3) return 1;
    return (fib(n-1)+fib(n-2));
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}