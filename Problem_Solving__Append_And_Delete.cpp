//Append and Delete - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //DND
    struct Optimizer
    {
        Optimizer()
        {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL); 
        }
    };
    Optimizer opt;
    //DND

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    
    int cl = 0;
    while(cl<s.size() && cl<t.size())
    {
        if(s[cl]!=t[cl]) break;
        cl++;
    }
    
    //cout << cl << "\n" << s.size() << "\n" << t.size();
    
    if(s.size()-cl+t.size()-cl<=k&& (s.size()-cl+t.size()-cl)%2==k%2)
    {
        cout<<"Yes"<<endl;
    }
    else if(s.size()+t.size()<=k)
    {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    
    return 0;
}