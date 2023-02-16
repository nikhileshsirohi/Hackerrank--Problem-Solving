#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,lsum=0,rsum=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                lsum+=a[i][j];
            }
        }
        for (int k = 0; k < n; k++)
        {
            if(i+k==(n-1))
            {
                rsum+=a[i][k];
            }
        }
        
    }
    cout<<abs(lsum-rsum);

    return 0;
}
