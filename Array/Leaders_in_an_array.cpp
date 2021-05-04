// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends







vector<int> leaders(int a[], int n){
    int MAX = a[n-1];
    vector<int> res;
    res.push_back(a[n-1]);
    for (int i = n - 2; i >= 0; --i)
        if(a[i] >= MAX){
            res.push_back(a[i]);
            MAX = a[i];
        }
    reverse(res.begin(), res.end()); 
    return res;
}


// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        
        //calling leaders() function
        vector<int> v = leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends
