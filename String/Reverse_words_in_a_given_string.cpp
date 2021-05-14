

//Solution 1
string reverseWords(string s) 
{ 
    string res = "";
    string store = "";
    for (int i = s.size() - 1; i >= 0; --i)
    {
        if(s[i] == '.')
        {
            res += store;
            store = "";
            string str(1, '.');
            res += str;
        }
        else
        {
        string str(1, s[i]);
        store.insert(0,str);
        }
    }
    res += store;
    return res;
} 


//Solution 2

string reverseWords(string S) 
{ 
    string res = "";
    string temp = ".";
    for (int i = 0; i < S.size(); ++i){
        if(S[i] == '.'){
            res.insert(0, temp);
            temp = ".";
        }
        else{
            temp += S[i];
        }
    }
    temp.erase(0,1);
    res.insert(0, temp);
    return res;
} 
