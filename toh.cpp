#include <bits/stdc++.h>
using namespace std;

/*
If we have only one disc we can directly tranfer it from source to destination.
If we have two discs, then we transfer disc2 to helper then 1 to dest and then finally disc 2 to dest too.
Now let's extrapolate this idea.
    Place (n-1) discs from src to helper
    then disc 1 to dest
    and then (n-1) discs again to dest.
    Voila! Problem solved.
*/

void toh(char source,char dest,char helper,int n){
    if(n==1){
        cout<<"Put disc "<<n<<" from "<<source<<" to "<<dest<<endl;
        return;
    }
    toh(source,helper,dest,n-1);
    cout<<"Put disc "<<n<<" from "<<source<<" to "<<dest<<endl;
    toh(helper,dest,source,n-1);
}


int main(){
    int n;
    cin>>n;
    char source,helper,dest;
    toh('A','C','B',n);
    return 0;
}