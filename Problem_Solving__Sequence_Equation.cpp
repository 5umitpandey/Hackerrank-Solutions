//Sequence Equation - Hackerrank/ProblemSolving/Algorithm/Implementation
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

    int n;
    cin >> n;

    int arr[100];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int x=1;
    int arrr[100];
    for (int x = 1; x <= n; x++)
    {   
        for (int i = 1; i <= n; i++)
        {
            // 1 == 4 3 5 1 2
            if(x == arr[i])
            {   
                for (int z = 1; z <= n; z++)
                {
                    if(i == arr[z])
                    {
                        arrr[x] = z;
                        break;
                    }
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arrr[i] << "\n";
    }

    return 0;
}