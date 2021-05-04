using namespace std;

int lastIndexOfOne(string str)
{
    int res = -1;
    for(int i = str.size()-1; i >= 0; --i)
    {
        if(str[i] == '1')
        {
            res = i;
            break;
        }
    }
    
    return res == -1 ? -1 : res;
}
int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        string str;
        cin >> str;
        
        cout << lastIndexOfOne(str) << endl;
    }
	return 0;
}
