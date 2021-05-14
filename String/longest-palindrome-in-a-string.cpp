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
        // aaaabbaa
        string s;
        cin>>s;
        string res = "";
        string ans = "";
        int p,q;
        int n = s.size();
        if(n == 1)
        cout<<s[0]<<"\n"; 
        if(n == 2)
            if(s[0] == s[1])
                cout<<s<<"\n"; 
            else
                cout<<s[0]<<"\n";
                
        if(n == 1 || n == 2)
        continue;
        for (int i = 0; i < s.size(); ++i)
        {
            
            for (int k = 0; k < 2; ++k)
            {
            ans = "";
            bool f = 0;
            if(k == 0)
            {
            p = i - 1, q = i + 1;
            if(p >= 0 && q < n)
            ans += s[i], f = 1;
            }
            else if(s[i] == s[i+1])
            {
            p = i - 1, q = i + 2;
            ans = ans + s[i];
            ans += s[i];
            if(p >= 0 && q < n)
            {
            f = 1;
			}
            }
    
            while(p >= 0 && q < n && s[p] == s[q] && f)
            {
                ans = s[p] + ans + s[q];
                p--,q++;
            }
            if(ans.size() > res.size())
            res = ans;
            // cout<<ans<<" "<<res<<"\n";
            }
            
        }
        if(res.size() == 1)
        cout<<s[0]<<"\n";
        else
        cout<<res<<"\n";
    }


    return 0;
}
                                     
