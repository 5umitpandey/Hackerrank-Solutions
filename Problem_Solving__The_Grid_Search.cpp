//The Grid Search - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <bits/stdc++.h>
using namespace std;

void search()
{   
    //input for grid
    int R, C; cin >> R >> C;
    vector <string> Grid[1001][1001];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; i < C; j++)
        {
            string input;
            cin >> input;
            Grid.push_back(input);
            cin >> Grid[i][j];
        }
    }
    
    

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; i < C; j++)
        {
            cout << Grid[i][j];
        }
    }

    //input for pattern
    /*int r, c; cin >> r >> c; string Pattern[1001][1001];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; i < c; j++)
        {
            cin >> Pattern[i][j];
        }
    }*/
    

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

    int t; cin >> t;
    while(t--)
    {
        search();
    }
    
    return 0;
}