//Birthday Chocolate Bar - Hackerrank/ProblemSolving/Algorithm/Implementation
#include<iostream>
using namespace std;
int main()
{
    int s[101], n, d, m;
    int count=0;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    
    cin >> d >> m;
    //     7    3

    int ans = 0;
    for(int i = 0; i < n; i++)
    {               // 6
        if (i + m - 1 < n)
        {    // 3       6
            int sum = 0;
            for (int j = i; j <= i + m - 1; j++)
            {
                sum = sum + s[j];
            }
            if ( sum == d ) 
            {//         7
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}