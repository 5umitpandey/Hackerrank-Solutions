//Encryption - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    /*DND
    struct Optimizer
    {
        Optimizer()
        {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL); 
        }
    };
    Optimizer opt;
    DND*/

    char str[1000];
    gets(str);
    int n = strlen(str);

    int dm = sqrt(n); //cout << "\n" << dm;
    
    int rem = n - dm*dm; //cout << rem;

    int c = dm; int r = dm;    

    if(rem!=0)
    c++;
    
    char msg[r+1][c];

    for(int i=0; i<(r+1); i++)
    for(int j=0; j<c; j++)
    msg[i][j] ='\0';

    int k=0;

    for(int i=0; i<(r+1) && (k<n); i++)
    for(int j=0; j<c && (k<n); j++)
    {
        msg[i][j] = str[k];
        k++;
    }

    for(int j=0; j<c; j++)
    {
        for(int i=0; i<=r; i++)
        if(msg[i][j] != '\0')
        cout << msg[i][j];
        cout << " ";
    }

    cout << endl;
    return 0;
}