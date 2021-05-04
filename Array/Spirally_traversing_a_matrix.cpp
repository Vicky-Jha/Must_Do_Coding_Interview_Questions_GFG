

#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends




class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > A, int r, int c) 
    {
    int i,j;
    vector<int> solution;
    if(r == 0)
        return solution;
    if(r == 1 && c == 1)
    {
        solution.push_back(A[0][0]);
        return solution;
    }
    int l=0,m=0,k=0;
    while(solution.size() != r*c)
    {
        if(solution.size() != r*c)
        for(i=l , j=m ; j<c-k ; j++)
            solution.push_back(A[i][j]);

        if(solution.size() != r*c)
        for(i=c-1-k ,j=k+1 ; j<r-k ; j++)
            solution.push_back(A[j][i]);

        if(solution.size() != r*c)
        for(i=r-1-k ,j=c-2-k ; j>=k ; j--)
            solution.push_back(A[i][j]);
        
        if(solution.size() != r*c)
        for(i=r-2-k,j=k;i>=k+1 ; i--)
            solution.push_back(A[i][j]);
        
        
        
        l++;
        m++;
        k++;
    }
    return solution;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
