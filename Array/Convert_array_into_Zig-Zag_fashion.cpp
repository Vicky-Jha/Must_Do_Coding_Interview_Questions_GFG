#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	   bool f = 1;
	   for (int i = 0; i < n - 1; ++i)
	   {
	       if(f)
	       {
	           if(arr[i] > arr[i+1])
	           swap(arr[i], arr[i+1]);
	       }
	       else
	       {
	           if(arr[i] < arr[i+1])
	           swap(arr[i], arr[i+1]);
	       }
	       f = !f;
	   }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
