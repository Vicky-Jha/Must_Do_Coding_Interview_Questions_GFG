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
        int n,k;
        cin>>n>>k;
        lli arr[n]{0};
        for (int i = 0; i < n; ++i)
        cin>>arr[i];
        
        for (int i = 0; i < n; i += k)
        if(i + k < n)
        reverse(arr + i, arr + i + k);
        else
        reverse(arr + i, arr + n);
        
        for (int i = 0; i < n; ++i)
        cout<<arr[i]<<" ";
        cout<<"\n";
    }

    return 0;
}
