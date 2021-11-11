//Bill Division - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <iostream>
#include <stdio.h>
using namespace std;

/*
4 1
3 10 2 9
7
Bon Appetit
------------
4 1
3 10 2 9
12
5
*/

int main()
{
    int n;
    cin >> n; //n=4
    int p;
    cin >> p; //p=1

    int arr[100000];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int r;
    cin >> r; //r=12

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i]; //24
    }

    sum = sum - arr[p];
    //sum = 24 - 10 = 14
    
    if( sum/2 == r )
    cout << "Bon Appetit";
    else
    cout << r - (sum/2);

    return 0;
}