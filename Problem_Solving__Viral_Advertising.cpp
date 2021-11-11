//Viral Advertising - Hackerrank/ProblemSolving/Algorithm/Implementation
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

    int arrL[50];
    int n;
    cin >> n;

    arrL[0] = 5/2;
    for (int i = 1; i < 50; i++)
    {
        arrL[i] = ((3 * (arrL[i-1]))/2);
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arrL[i] << " ";
    // }
    //cout << endl;
    int arrC[50];
    arrC[0] = 5/2;
    for (int i = 1; i < 50; i++)
    {
        arrC[i] = arrC[i-1] + arrL[i];
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arrC[i] << " ";
    // }

    cout << arrC[n-1];
    return 0;
}