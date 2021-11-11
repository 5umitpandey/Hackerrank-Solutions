//Fair Rations - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <iostream>
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

    int n; cin >> n;
    
    int a[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int ans = 0;

    //2 3 4 5 6
    //2 4 5 5 6    :2
    //2 4 6 6 6    :4



    //1 2
    //2 3
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] % 2 == 1) 
        {
            ++a[i];
            ++a[i + 1];
            ans += 2;
        }
    } 

    if (a[n - 1] % 2 == 1) 
    {
        printf("NO\n");
        return 0;
    }
    printf("%d\n", ans);

    return 0;
}