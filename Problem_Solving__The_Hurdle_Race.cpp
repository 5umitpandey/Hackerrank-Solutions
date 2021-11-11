//The Hurdle Race - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <iostream>
using namespace std;
int main()
{
    // //DND
    // struct Optimizer
    // {
    //     Optimizer()
    //     {
    //     ios_base::sync_with_stdio(false); 
    //     cin.tie(NULL); 
    //     }
    // };
    // Optimizer opt;
    // //DND

    int n, j;
    cin >> n >> j;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max;
    for (int i = 0; i < n; i++)
    {   
        if (arr[0] < arr[i])
        arr[0] = arr[i];
    }

    max = arr[0];

    if ( j > max )
    cout << 0;
    else
    cout << max - j;

    return 0;
}