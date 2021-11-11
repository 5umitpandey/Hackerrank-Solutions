//Electronics Shop - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n, m;
    cin >> s >> n >> m;
    int a[n];
    int b[m];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    
    int mx = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] + b[j] <= s){
                mx = max(mx, a[i] + b[j]);
            }
        }
    }
    if(mx == 0) mx = -1;
    cout << mx;
    
    return 0;
}