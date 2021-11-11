// Jumping on the Clouds: Revisited - Hackerrank/ProblemSolving/Algorithm/Implementation
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

    int n, k, arr[1000];
    
    cin >> n >> k;

    for(int i=0; i<n; i++) 
    {
        cin >> arr[i];
    }

    int e = 100;
    int i = 0;
    while (1) 
    {
        e -= 2*arr[i]+1;
        i = (i+k) % n;
        if (i == 0) break;
    }
    printf("%d\n", e);
    
    return 0;
}