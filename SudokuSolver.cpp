#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


 // } Driver Code Ends

class Solution 
{
    public:
    
    bool isSafe(int grid[9][9],int num,int i,int j) 
    {
        for(int x=0;x<9;x++)
        if(grid[i][x]==num || grid[x][j]==num)
        return false;

        int sx = (i/3)*3, sy = (j/3)*3;
        for(int x=sx;x<sx+3;x++) 
        {
            for(int y=sy;y<sy+3;y++)
            if(grid[x][y]==num)
            return false;
        }
        
        return true;
    }
    
    bool helper(int grid[9][9],int i,int j) 
    {
        if(i==9)
        return true;
        
        if(j==9)
        return helper(grid,i+1,0);

        if(grid[i][j]!=0)
        return helper(grid,i,j+1);
        
        for(int n=1;n<=9;n++) 
        {
            if(isSafe(grid,n,i,j))
            {
                grid[i][j] = n;
                if(helper(grid,i,j+1)) 
                return true;
            }
        }
        grid[i][j] = 0;
        return false;
    }
    
    bool SolveSudoku(int grid[N][N])  
    { 
        return helper(grid,0,0);
    }
    
    void printGrid (int grid[N][N]) 
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            cout<<grid[i][j]<<" ";
        }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends