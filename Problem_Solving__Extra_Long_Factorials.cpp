// Extra Long Factorials - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <iostream>
#include <vector>
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

    int n;
    cin >> n;

    int i=0,j=0,fact[20000],k=0,l=0,temp=0;

    fact[0]=1;
    l=1;
 
    for(i=2;i<=n;i++)
    {
       for(j=0;j<l;j++)
        {
            k=temp+i*fact[j];
            fact[j]=k%10;
            temp=k/10;
        }
        while(temp>0)
        {
            fact[l++]=temp%10;
            temp=temp/10;
        }
    }
    for(i=l-1;i>-1;i--)
    cout<<fact[i];
    return 0;
}