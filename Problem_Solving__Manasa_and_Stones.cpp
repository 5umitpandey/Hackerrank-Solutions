//Manasa and Stones - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <bits/stdc++.h>
using namespace std;

void stones()
{
    int n; cin >> n; // 4
    int a; cin >> a; // 10
    int b; cin >> b; // 100
    // 0, 10, 20, 30
    // 0, 10, 20, 120
    // 0, 10, 110, 120
    // 0, 10, 110, 210
    // 0, 100, 110, 120
    // 0, 100, 110, 210
    // 0, 100, 200, 210
    // 0, 100, 200, 300
    
    --n;
    if(a < b)
        swap(a, b);
    if(a == b)
        printf("%d\n", n*a);
    else
    {
        for(int j=0; j <= n; ++j)
            printf("%d ", a*j+b*(n-j));
        printf("\n");
    }
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

    int t; cin >> t;
    while(t--)
    {
        stones();
    }
    
    return 0;
}