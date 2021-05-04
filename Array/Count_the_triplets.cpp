


 // } Driver Code Ends

class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    unordered_multiset<int> uset;
	    for(int i = 0; i < n; ++i)
	    uset.insert(arr[i]);
	    int c = 0;
	    for(int i = 0; i < n; ++i)
	    {
	        for(int j = i + 1; j < n; ++j)
	        {
	            if(uset.find(arr[i]+arr[j]) != uset.end())
	            c++;
	        }
	    }
	    return c;
	}
};

// { Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}  // } Driver Code Ends
