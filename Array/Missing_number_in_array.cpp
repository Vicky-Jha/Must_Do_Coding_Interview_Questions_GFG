// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& array, int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];

        cout << MissingNumber(array, n) << "\n";
    }
    return 0;
}// } Driver Code Ends


int MissingNumber(vector<int>& array, int n) {
    int x = 0;
    int y = 0;
    for (int i = 0; i < array.size(); ++i)
    x ^= array[i];
    
    for (int i = 1; i <= n; ++i)
    y ^= i;
    
    return (x^y);
}
