#include <bits/stdc++.h>
using namespace std;

//Place tile of (1*m) int a floor of (n*m).

int ways(int n,int m){
    if(n==m) return 2; //We can either place hor only or ver only.
    if(n<m){
        //We can only place tiles hor.
        return 1;
    }
    //Vertically
    int verPlace = ways(n-m,m);
    //Horizontally
    int horPlace = ways(n-1,m);
    return verPlace+horPlace;
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<ways(n,m);
    return 0;
}