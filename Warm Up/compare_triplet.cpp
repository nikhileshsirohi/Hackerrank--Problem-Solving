#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[3],b[3];
    int n=0,m=0;
    int i;
    for (i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    for (int j = 0; j < 3; j++)
    {
        cin>>b[j];
    }
    for (int k = 0; k < 3; k++)
    {
        if (a[k]>b[k])
        {
            n++;
        }
        else if (a[k]<b[k])
        {
            m++;
        }
    }
    cout<<n<<" "<<m;
    
    return 0;
}
