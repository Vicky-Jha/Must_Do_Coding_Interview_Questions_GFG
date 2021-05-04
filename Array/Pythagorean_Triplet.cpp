#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    unordered_set<int> uset;
	    for (int i = 0; i < n; ++i)
	        uset.insert(arr[i]);
	    for (int i = 0; i < n; ++i)
	    {
	        for (int j = i + 1; j < n; ++j)
	        {
	            int val = sqrt(arr[i]*arr[i] + arr[j]*arr[j]);
	            if(val*val == arr[i]*arr[i] + arr[j]*arr[j])
	                if(uset.find(val) != uset.end())
	                    return true;
	        }
	    }
	    return false;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  // } Driver Code Ends
