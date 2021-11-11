//Picking Numbers - Hackerrank/ProblemSolving/Algorithm/Implementation
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

    int N;
    int A[1000];
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        int a;
        scanf("%d", &a);
        A[a]++;
    }
    int ans=0;
    for(int i=1; i<1000; i++)
        ans=max(ans, A[i-1]+A[i]);
        printf("%d\n", ans);

    return 0;
}