//Library Fine - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <bits/stdc++.h>
using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) 
{
    int fine;
    if( ((y1) < (y2)) || ( ( (y1 == y2)) && (m1 < m2) ) || ( ( (y1 == y2)) && (m1 == m2) && (d1) < (d2)) )
    {
        fine = 0;
    }
    else
    {
        if( (d1==d2) && (m1==m2) && (y1!=y2) )
        {
            fine = 10000;
        }
        else if( (d1!=d2) && (m1==m2) && (y1!=y2) )
        {
            fine = 10000;
        }
        else if( (d1!=d2) && (m1!=m2) && (y1!=y2) )
        {
            fine = 10000;
        }
        
        else if( (d1!=d2) && (m1!=m2) && (y1==y2) )
        {
            fine =  500 * (m1-m2) ;
        }
        
        else if( (d1==d2) && (m1!=m2) && (y1==y2) )
        {
            fine = 500 * (m1-m2);
        }
        
        else if( (d1!=d2) && (m1==m2) && (y1==y2) )
        {
            fine = 15 * (d1-d2);
        }
    }
    return fine;
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
    
    int d1, m1, y1, d2, m2, y2;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;
    
    cout << libraryFine(d1, m1, y1, d2, m2, y2);

    return 0;
}