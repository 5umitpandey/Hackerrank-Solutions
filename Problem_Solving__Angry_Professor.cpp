//Angry Professor - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <iostream>
using namespace std;

void lecture(int n, int k, int arr[1000])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < 1)
        count++;
    }
    if(count >= k)
    cout << "NO\n";
    else
    cout << "YES\n";
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

    int t;
    cin >> t;
    int n, k;
    int arr[1000];
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        lecture(n, k, arr);
    }
    return 0;
}