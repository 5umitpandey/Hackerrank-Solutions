//Migratory Birds - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <iostream>
using namespace std;

const int maxN = 1e5+10;
int N, Arr[10];

int main()
{
    cin >> N;
    for (int i=1,x; i <= N; i++) cin >> x, Arr[x]++;
    int ans = 1;
    for (int i=2; i <= 5; i++)
        if (Arr[i] > Arr[ans])
        ans = i;
    cout << ans;
}