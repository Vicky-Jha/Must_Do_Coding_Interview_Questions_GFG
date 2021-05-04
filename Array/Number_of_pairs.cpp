#include<bits/stdc++.h>
using namespace std;

 
 // } Driver Code Ends


 

// Function to count number of pairs such that x^y is greater than y^x
// X[], Y[]: input arrau
// m, n: size of arrays X[] and Y[] respectively
long long countUtil(int x, int NoOfY[], int Y[], int n)
{
    long long a = 0;
    if(x == 0) return 0;
    
    if(x == 1) return NoOfY[0];
    
    a += NoOfY[0] + NoOfY[1];
    int* idx = upper_bound(Y,Y+n,x);
    a += (Y+n - idx);
    
    if(x == 2) a -= (NoOfY[3] + NoOfY[4]);
    
    if(x == 3) a += NoOfY[2];
    
    return a;
}
long long countPairs(int X[], int Y[], int m, int n)
{
   sort(Y, Y + n);
   long long ans = 0;
   int NoOfY[5]{0};
   
   for (int i = 0; i < n; ++i)
    if(Y[i] < 5)
        NoOfY[Y[i]]++;
        
   for (int i = 0; i < m; ++i)
    ans += countUtil(X[i], NoOfY, Y, n);
    return ans;
}


// { Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		cout<<countPairs(a, b, M, N)<<endl;
	}
}  // } Driver Code Ends
