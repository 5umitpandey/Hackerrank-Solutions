//Utopian Tree - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <bits/stdc++.h>
using namespace std;

void tree(int n)
{
    int arr[70];
    arr[0] = 1;
    arr[1] = 2;
    
    int h = 0;
    for(int i=2; i<70; i++)
    {
        if(i%2==0)
        arr[i] = arr[i-1] + 1;
        else
        arr[i] = 2 * arr[i-1];
    }    
    cout << arr[n] << "\n";
}


int main()
{
    // //DND
    struct Optimizer
    {
        Optimizer()
        {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL); 
        }
    };
    Optimizer opt;
    // //DND

    int arr[70];
    arr[0] = 1;
    arr[1] = 2;
    
    int h = 0;
    for(int i=2; i<70; i++)
    {
        if(i%2==0)
        arr[i] = arr[i-1] + 1;
        else
        arr[i] = 2 * arr[i-1];
    }    
    
    // for(int i=0; i<10; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int t;
    cin >> t;
    int n;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        tree(n);
    }
    
    return 0;
}