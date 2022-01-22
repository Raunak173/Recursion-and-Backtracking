//Rat in a maze (MXN)

#include <bits/stdc++.h>
using namespace std;

bool ratInMaze(vector<vector<int>>&maze,vector<vector<int>>&sol,int i,int j,int m,int n){
    if(i==m-1 and j==n-1){
        sol[i][j]=1;
        //Print paths:
        for(auto v:sol){
            for(auto el:v){
                cout<<el<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }
    if(i>=m or j>=n) return false;
    if(maze[i][j]==0) return false;
    sol[i][j]=1; //Assume paths to be true.
    bool rightS = ratInMaze(maze,sol,i,j+1,m,n);
    bool downS = ratInMaze(maze,sol,i+1,j,m,n);
    //Checked success from going right and down both.
    sol[i][j]=0; //Backtracking step
    if(rightS or downS) return true;
    return false;
}

int main(){
    vector<vector<int>>maze(4,vector<int>(4,0));
    maze={{1,1,1,1},{1,1,0,1},{1,1,1,0},{1,0,1,1}};
    vector<vector<int>>sol(4,vector<int>(4,0));
    ratInMaze(maze,sol,0,0,4,4);
    return 0;
}