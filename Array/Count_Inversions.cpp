#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends





// Function to find inversion count in the array

// arr[]: Input Array
// N : Size of the Array arr[]
//Solution 1 Accepted
long long int inversionCount(long long arr[], long long N)
{
    long long int ans = 0;
    multiset<int> mset;
    mset.insert(arr[N-1]);
    for (int i = N-2; i >= 0; --i){
        if(arr[i] > *mset.begin()){
            ans++;
            auto it = mset.begin();
            it++;
            while(it != mset.end() && arr[i] > *it)
            ans++, it++;
        }
        mset.insert(arr[i]);
    }
    return ans;
}
//Solution 2 TLE
long long int inversionCount(long long arr[], long long N)
{
   long long int count = 0;
   for(int i = 0; i < N; ++i){
       for(int j = 0; j < i; ++j){
           if(arr[i] < arr[j]) count++;
       }
   }
   return count;
}


// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        
        cout << inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
