//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution{
public:

    vector<vector<int>> maxProfit(vector<int> prices, int n)
    {
        int i = 0;
        if(n == 1)
        return {{}};
        
        vector<vector<int>> res;
        int buy, sell;
        while(i < n - 1){
            
            while(i < n - 1 && prices[i+1] <= prices[i])
                ++i;
                
            if(i == n - 1) return res;
            
            buy = i++;
            
            while ((i < n) && (prices[i] >= prices[i - 1]))
            i++;
            sell = i - 1;
            res.push_back({buy, sell});
        }
        return res;
    }
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        return maxProfit(A, n);
    }
};


// { Driver Code Starts.

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            for (int i=0; i<ans.size(); ++i){
                cout<<"("<<ans[i][0]<<" "<<ans[i][1]<<") ";
            }
        }cout<<endl;
    }
    return 0;
}

  // } Driver Code Ends
