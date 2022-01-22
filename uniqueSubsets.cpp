#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
    void solve(vector<int> arr,vector<int> op,int i,set<vector<int> > &s){
       if(i==arr.size()){
           s.insert(op);
           return;
       }
       solve(arr,op,i+1,s);
       op.push_back(arr[i]);
       solve(arr,op,i+1,s);
   }
   vector<vector<int> > AllSubsets(vector<int> arr, int n)
   {
       vector<vector<int> > ans;
       sort(arr.begin(),arr.end());
       set<vector<int> > s;
       vector<int> op;
       solve(arr,op,0,s);
       for(auto i:s) ans.push_back(i);
       return ans;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends