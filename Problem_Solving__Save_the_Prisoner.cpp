//Save the Prisoner! - Hackerrank/ProblemSolving/Algorithm/Implementation
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

    int t;
    cin >> t;
    while(t--) 
    {
        int n,c,s; cin >> n >> c >> s;
        --s; --c;
        //2    3
        s += c;
    //  s = 5
        s %= n;
    //  s = 2
        s++;
    //  s = 3
        cout << s << endl;
    }
    return 0;
}