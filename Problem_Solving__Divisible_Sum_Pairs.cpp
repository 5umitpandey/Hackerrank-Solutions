//Divisible Sum Pairs - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    
    int ar[101];
    
    for (int i=0; i<n; i++) 
    {
        cin >> ar[i];
    }

    int result=0;

	for(int i=0; i<n; i++)
    {
		for(int j = i+1; j<n; j++)
        if ((ar[i] + ar[j]) % k == 0) 
            result++; 
	}
	
    cout << result;
    
    return 0;
}