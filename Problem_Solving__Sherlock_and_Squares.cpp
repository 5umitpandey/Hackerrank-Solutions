//Sherlock and Squares - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <bits/stdc++.h>
using namespace std;

void squares(unsigned long long a, unsigned long long b) 
{   
    //999999945 999999985
    a--;
    cout<<(int(sqrt(b)))-(int)sqrt(a)<<endl;
}

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

    unsigned long long t;
    cin >> t;
    while(t--)
    {   
        unsigned long long a, b;
        cin >> a >> b;
        squares(a,b);
    }
    return 0;
}