//Cat & a Mouse - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <iostream>
using namespace std;

void result(int a, int b, int c)
{
    //catA
    int PosA = 0;
    for (int i = a; i < c; i++)
    {
        PosA++;
    }
    int PosAA = 0;
    for (int i = a; i > c; i--)
    {
        PosAA++;
    }

    //catB
    int PosB = 0;
    for (int i = b; i < c; i++)
    {
        PosB++;
    }
    int PosBB = 0;
    for (int i = b; i > c; i--)
    {
        PosBB++;
    }
    
    int catA = max(PosA, PosAA);
    int catB = max(PosB, PosBB);

    if(catA == catB)
    {
        cout << "Mouse C";
    }
    else if(catA < catB)
    {
        cout << "Cat A";
    }
    else if(catA > catB)
    {
        cout << "Cat B";
    }
}

int main()
{
    int n;
    cin >> n;

    int a, b, c;

    for(int i=0; i<n; i++)
    {
        cin >> a >> b >> c;
        result(a, b, c);
        cout << "\n";
    }
    return 0;
}