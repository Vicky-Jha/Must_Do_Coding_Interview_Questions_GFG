//SOlution 1

class Solution
{
	public:
	void permutation_helper(vector<string> &res, string S, int start){
	    if(start == S.size()){
	        res.push_back(S);
	        return;
	    }
	    for(int i = start; i < S.size(); ++i){
	        swap(S[i], S[start]);
	        permutation_helper(res, S, start+1);
	    }
	}
		vector<string>find_permutation(string S)
		{
		    sort(S.begin(), S.end());
		    vector<string> res;
		    permutation_helper(res, S, 0);
		    return res;
		}
};

// Solution 2

class Solution
{
	public:
		vector<string>find_permutation(string s)
		{
		    vector<string> res;
		    sort(s.begin(), s.end());
        do
        {
          res.push_back(s);   
        }while(next_permutation(s.begin(), s.end()));
        return res;
		}
};

//Solution 3

class Solution
{
  void factorial( vector<int>& fact){
        fact[1] = 1;
        for ( int i =2; i <= 10; ++ i )
            fact[i] = i*fact[i-1];

    }
    string getPermutation(string res, int k, vector<int>& fact) {
        int n = res.size();
        string ans = "";
        while (n > 1)
        {
            int q = k / fact[n-1];
            if( k % fact[n-1] == 0 )
            {
                ans += res[q-1];
                res.erase(q-1,1);
                reverse(res.begin(),res.end());
                ans += res;
                return ans; 
            }
            else
            {
                ans += res[q];
                res.erase(q,1);
            }
            k -= q*fact[n-1];
            n--;
        }
        ans += res;
        return ans ;
    }
  
	public:
		vector<string>find_permutation(string s)
		{
		    vector<int> fact(11);
		    factorial(fact);
		    vector<string> res;
		    sort(s.begin(), s.end());
        for(int i = 1; i <= fact[s.size()]; ++i)
        res.push_back(getPermutation(s,i,fact));
        return res;
		}
};

