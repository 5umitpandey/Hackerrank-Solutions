//Cavity Map - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <bits/stdc++.h>
using namespace std;

//correct
int N;
char grid[101][101];
char grid2[101][101];

int main()
{
    scanf("%d\n", &N);
    for(int i=0; i<N; i++)
    gets(grid[i]);
    memcpy(grid2, grid, sizeof grid2);
    for(int i=1; i<N-1; i++)
        for(int j=1; j<N-1; j++)
            if(grid[i][j]>grid[i+1][j])
            if(grid[i][j]>grid[i-1][j])
            if(grid[i][j]>grid[i][j+1])
            if(grid[i][j]>grid[i][j-1])
                grid2[i][j]='X';
    for(int i=0; i<N; i++)
    puts(grid2[i]);
    return 0;
}

//needs improvisation
/*
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

    // 4
    // 1112
    // 1912
    // 1892
    // 1234

    // 1112
    // 1X12
    // 18X2
    // 1234

    int n; cin >> n;

    vector <string> item;
    for (int i = 0; i < (n); i++)
    {
        string input;
        cin >> input;
        item.push_back(input);
    }
    
    for(int i=(n+1); i<((n*n)-(n+1)); i++)
    {   
        if( (item[i]>item[i+n-1]) && (item[i]>item[i-n]) && (item[i]>item[i+1]) && (item[i]>item[i-1]) )
        {
            item[i] = 'X';
        }
    }
        
    for(int i=0; i<(n*n); i++)
    {   
        if( i==0 )
        cout << item[i];
        else
        {
            if( i%n==0 )
            cout << "\n" << item[i];
            else
            cout << item[i];
        }
    } 
    return 0;
}
*/