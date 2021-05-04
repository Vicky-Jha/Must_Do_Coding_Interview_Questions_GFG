#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


// Function to merge two input arrays
// arr1[], arr2[]: input arrays
// n, m: size of arr1[] and arr2[] respectively
void merge(int arr1[], int arr2[], int n, int m) 
{ 
    vector<int> arr(n+m);
    
    int i = 0,j = 0,k = 0;
    
    while(i < n && j < m)
    {
        if(arr1[i] < arr2[j])
            arr[k++] = arr1[i++];
        else
            arr[k++] = arr2[j++];
    }
    while(i < n)
        arr[k++] = arr1[i++];
    while(j < m)
        arr[k++] = arr2[j++];
    
    for(i = 0; i < n; ++i)
        arr1[i] = arr[i];
    for(j = n; j < m+n; ++j)
        arr2[j-n] = arr[j];
} 


// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    int arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    
	    merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            printf("%d ", arr1[i]); 
        
       
	    for (int i = 0; i < m; i++) 
		    printf("%d ", arr2[i]); 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends
