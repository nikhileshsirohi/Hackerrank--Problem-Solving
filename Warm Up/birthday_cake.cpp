#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    for (int j = 0; j < n; j++)
    {
        if (a[j]>=max)
        {
            max=a[j];
        }
    }
    for (int k = 0; k < n; k++)
    {
        if (max==a[k])
        {
            count++;
        }
    }
    cout<<count;
        
    return 0;
}
