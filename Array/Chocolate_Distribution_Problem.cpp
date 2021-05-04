#define lli long long int
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        lli arr[n];
        for (int i = 0; i < n; ++i)
        cin>>arr[i];
        int m;
        cin>>m;
        
        sort(arr, arr + n);
        lli MIN = LLONG_MAX;
        for (int i = 0; i <= n - m; ++i)
            MIN = min(MIN, arr[i+m-1] - arr[i]);
        cout<<MIN<<"\n";
        
    }

    return 0;
}
