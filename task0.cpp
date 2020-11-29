#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n<=0 || n>1000)
    {cout << "Please input value (of n) in the range (0 , 1000]";}
    else
    {
        int a[n], b[n];
        int i=0,j=0;
        while (i<n)
        {cin >> a[i];
        i++;}
        while (j<n)
        {cin >> b[j];
        j++;}

        int t=0;
        while (a[t]==b[t] && t<n-1)
        {t++;}
        if (a[t]==b[t])
        {cout << "YES";}
        else
        {
            int k=b[t]-a[t];
            if (k<=0)
            {cout << "NO";}
            else
            {
                if (t==n-1)
                {cout << "YES";}
                else
                {
                    t++;
                    while (b[t]-a[t]==k && t<n-1)
                    {t++;}
                    if (b[t]-a[t]==k)
                    {cout << "YES";}
                    else
                    {
                        while (a[t]==b[t] && t<n-1)
                        {t++;}
                        if (a[t]==b[t])
                        {cout << "YES";}
                        else
                        {
                            cout << "NO";
                        }
                    }
                }
            }
        }    
    }
    return 0;
}