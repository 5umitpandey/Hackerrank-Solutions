//Designer PDF Viewer - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <bits/stdc++.h>
using namespace std;
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
    
    int a[42];
    char s[1231212];

    for (int i = 0; i < 26; i++) 
    {
        scanf("%d", a + i);
    }

    scanf("%s", s);

    int maxx = 0;
    int len = 0;

    for (int i = 0; s[i]; i++) 
    {
      len++;
      maxx = max(maxx, a[s[i] - 'a']);
    }

    printf("%d\n", maxx * len);
    return 0;
}