//Cut the Sticks - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <bits/stdc++.h>
using namespace std;
int neww;
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

    int n; cin >> n;
    
    int arr[10000];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    int temp = arr[0];
    for(int i=0; i<n; i++) 
    {
        if(temp>arr[i]) 
        {
            temp = arr[i];
        }
    }
    
    //cout << temp;
    

    int arrr[10000];
    
    cout << n << "\n";
    
    int count = 0, found = 0;
A:
{    
    count = 0;
    for(int i=0; i<n; i++)
    {
        arr[i] = arr[i] - temp;
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            for(int j=i; j<(n-1); j++)
            arr[j] = arr[j+1];
            found=1;
            i--;
            n--;
        }
    }
    
    //1 13 3 8 14 9 4 4   : 8
    //- 12 2 7 13 8 3 3   : 7
    //- 10 - 5 11 6 1 1   : 6
    //- 10 - 5 11 6 - -   : 4
    for(int i=0; i<n; i++)
    {
        if( arr[i] > 0 )
        {
            count ++;
        }
    }
    if( count > 0)
    {
        if(count != neww)
        cout << count << "\n";
    }
    neww = count;

    for(int i=0; i<n; i++) 
    {
        if(temp>arr[i]) 
        {
            temp = arr[i];
        }
    }
}
    int countt = count;
    if ( countt > 1 )
    {
        goto A;
    }
    
    return 0;
}