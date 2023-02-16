#include <iostream>
#include <vector>
using namespace std;

void result(int arr[], int n, int m, int d)
{
    int count=0;
    int ans=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            sum+=arr[j];
        }
        if(sum==d)
        {
            ans++;
        }
        sum=0;
        m++;
    }
    cout<<ans;
}
int main()
{
    int n,d,m;
    cin>>n;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    cin>>d>>m;
    result(s,n,m,d);

    return 0;
}
