//Circular Array Rotation - Hackerrank/ProblemSolving/Algorithm/Implementation
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

    int n, k, q;
    cin >> n >> k >> q;

    int arr[n];
    for(int i=0; i<n; i++) 
    {
        cin >> arr[i];
    }
    
    k = k % n;
    while(q--) 
    {
        int x;
        cin >> x;
        x = x - k;
        if(x < 0) x = x + n;
        printf("%d\n", arr[x]);
    }
    return 0;
}