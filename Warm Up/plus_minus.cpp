#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, p=0,q=0,r=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {

        if (a[i] > 0)
        {
            p++;
        }
        else if (a[i] < 0)
        {
            q++;
        }
        else 
        {
            r++;
        }
    }
    float x,y,z;
    x=float(p)/n;
    y=float(q)/n;
    z=float(r)/n;
    printf("%0.6f\n%0.6f\n%0.6f",x,y,z);
    return 0;
}
