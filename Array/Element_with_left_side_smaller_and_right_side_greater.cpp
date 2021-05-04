#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n) {
    vector<int> left(n), right(n);
    left[0] = arr[0];
    right[n-1] = arr[n-1];
    
    for (int i = 1; i < n; ++i)
        left[i] = max(left[i-1], arr[i]);
    for (int i = n - 2; i >= 0; --i)
        right[i] = min(right[i+1], arr[i]);
    for (int i = 1; i < n - 1; ++i)
        if(left[i] == right[i])
        return left[i];
    return -1;
}
