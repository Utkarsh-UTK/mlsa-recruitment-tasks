#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b,i=2;
    float c,d;
    cin >> a >> b;
    while (i<b)
    {
        c=b%i;
        if (c!=0)
        {i++;}
        else
        {
            d=a%i;
            while (d==0)
            {a=a/i;
            d=a%i;}
            i++;
        }
    }
    cout << a;
    return 0;
}
