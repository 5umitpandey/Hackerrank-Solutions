//Drawing Book - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
        // n=
    int p;
    cin >> p;
        // p=
    if( p==n )
    {
        cout << 0;
        exit(0);
    }
    else if( n==2 && p==1)
    {
        cout << 0;
        exit(0);
    }
    else if( p == (n-1) )
    {
        if( p%2 == 0 )
        {
            cout << 0;
            exit(0);
        }
        else
        {
            cout << 1;
            exit(0);
        }
    }
    
    int tf = 0, tb = 0;

    int x, y;

    if( p%2 == 0)
    x = p;
    else
    y = p;

    for(int i=1; i<n; i++)
    {
        if( i == x )
        {
            tf = i - (p/2);
        }
        else if( i == y )
        {
            tf = i - (p/2) - 1;
        }
    }

    for(int i=n; i>1; i--)
    {
        if( i == x )
        {
            tb = ( ( n - (p/2) - (i/2) ) / 2 );
        }
        else if( i == y )
        {
            tb = ( ( n - (p/2) - (i/2) ) / 2 );
        }
    }
    
    //cout << tf << " " << tb << "\n";
    cout << min(tf,tb);

    return 0;
}