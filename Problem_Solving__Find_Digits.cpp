// Find Digits - Hackerrank/ProblemSolving/Algorithm/Implementation
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

    int N;
    cin >> N;

    int temp = N, count = 0; 
    while (temp != 0) 
    { 
        int d = temp % 10; 
        temp /= 10; 
        
        if (d > 0 && N % d == 0) 
            count++; 
    } 

    cout << count;
    return 0;
}