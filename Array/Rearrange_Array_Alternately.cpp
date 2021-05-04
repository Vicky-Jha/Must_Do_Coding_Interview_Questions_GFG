// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

// arr: input array
// n: size of array
void rearrange(long long *arr, int n) 
{ 
	int l = 0, r = n - 1, MAX = arr[n-1] + 1;
	bool idx = 1;
	for (int i = 0; i < n; ++i){
	    if(idx){
	        arr[i] += (arr[r] % MAX)*MAX*1LL;
	        r--;
	        idx = 0;
	    }else{
	        arr[i] += (arr[l] % MAX)*MAX*1LL;
	        l++;
	        idx = 1;
	    }
	}
	for (int i = 0; i < n; ++i)
	    arr[i] /= MAX;
}

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        //calling rearrange() function
        rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends
