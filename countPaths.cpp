#include <bits/stdc++.h>
using namespace std;

int count(int i,int j,int m,int n){
   if(i==m or j==n) return 0;
   if(i==m-1 and j==n-1) return 1;
   int downP = count(i+1,j,m,n);
   int rightP = count(i,j+1,m,n);
   return downP+rightP;
}

int main(){
   int m,n;
   cin>>m>>n;
   cout<<count(0,0,m,n);
   return 0;
}