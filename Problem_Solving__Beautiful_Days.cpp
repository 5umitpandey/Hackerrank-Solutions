//Beautiful Days - Hackerrank/ProblemSolving/Algorithm/Implementation
// ALSO TAUGHT HOW TO CHECK IF NUM IS FLOAT OR INT
#include <bits/stdc++.h>
using namespace std;

//reverse function
int reverse(int i)
{
    int rev = 0, remainder;
    while (i != 0) 
    {
        remainder = i % 10;
        rev = rev * 10 + remainder;
        i /= 10;
    }
    return rev;
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

    float a, b, c;
    cin >> a >> b >> c;
    
    int count = 0;
    int countt = 0;
    float num;
    for(int i=a; i<=b; i++)
    {
        num = ((abs(i-reverse(i)))/c);
        int n = (int)num;
        float n1 = (float)n;
        if(num == n1)
        {
            count++;
        }
        else
        {
            countt++;
        }
    }
    // cout << reverse(a);
    // cout << endl << (abs(a-reverse(a)));
    // cout << endl << float(((abs(a-reverse(a)))/c));
    cout << count;

    return 0;
}