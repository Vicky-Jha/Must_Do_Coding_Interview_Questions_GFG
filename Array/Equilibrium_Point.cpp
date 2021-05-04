#include <iostream>
using namespace std;

// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long arr[], int n) {

    long long int sum = 0; 
    long long int leftsum = 0; 
    for (int i = 0; i < n; ++i) 
        sum += arr[i]; 

    for (int i = 0; i < n; ++i) 
    { 
        sum -= arr[i]; 

        if (leftsum == sum) 
            return i+1; 

        leftsum += arr[i]; 
    } 

    return -1; 
}
