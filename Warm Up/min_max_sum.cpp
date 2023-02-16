#include <iostream>
#include <vector>
using namespace std;

long int maxarr(long int a[])
{
    long int max=a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i]>=max)
        {
            max=a[i];
        }
    }
    return max;
}

long int minarr(long int a[])
{
    long int min=a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i]<=min)
        {
            min=a[i];
        }
    }
    return min;
}

int main()
{
    long int a[5];
    long int sum[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    for (int j = 0; j < 5; j++)
    {
        switch (j)
        {
        case 0:
            sum[0]=a[1]+a[2]+a[3]+a[4];
            break;
        case 1:
            sum[1]=a[0]+a[2]+a[3]+a[4];
            break;
        case 2:
            sum[2]=a[1]+a[0]+a[3]+a[4];
            break;
        case 3:
            sum[3]=a[1]+a[2]+a[0]+a[4];
            break;
        case 4:
            sum[4]=a[1]+a[2]+a[3]+a[0];
            break;
        }
    }
    cout<<minarr(sum)<<" ";
    
    cout<<maxarr(sum);
    
    return 0;
}
