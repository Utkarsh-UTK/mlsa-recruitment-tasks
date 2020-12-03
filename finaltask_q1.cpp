#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,m,i=0,t=0;
    cin >> n >> m;
    char a[n*m];
    while (i<n*m)
    {cin >> a[i];
    i++;}
    int p=1,q=0;
    while (p<n)
    {
        if (a[(p*m)-1]=='D')
        {p++;}
        else
        {t++;
        p++;}
    }
    while (q<m-1)
    {
        if (a[(n-1)*m+q]=='R')
        {q++;}
        else
        {t++;
        q++;}
    }
    cout << t;
    return 0;
}