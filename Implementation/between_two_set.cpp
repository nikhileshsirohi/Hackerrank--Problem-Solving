#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b, a%b);
}
int gcdarray(int arr[], int n)
{
    int ans=arr[0];
    for (int i = 1; i < n; i++)
    {
        ans=gcd(arr[i], ans);
    }
    return ans;
    
}
int lcm(int arr[], int n)
{
    int ans=arr[0];
    for (int i = 1; i < n; i++)
    {
        ans=(arr[i]*ans)/(gcd(arr[i],ans));
    }
    return ans;
}
int main()
{
    int n,m;
    cin>>m>>n;
    int a[m],b[n];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int l=lcm(a,m);
    int g=gcdarray(b,n);
    int mul=g/l;
    int count=0;
    int result=0;
    int l1;
    for (int k = 1; k <= mul; k++)
    {
        l1=l*k;
        for (int k1 = 0; k1 < n; k1++)
        {
            if(gcd(l1, b[k1])==l1)
            {
                count++;
            }
        }
        if(count==n)
            {
                result++;
                count=0;
            }
            else
            {
                count=0;
            }
    }
    cout<<result;

    return 0;
}
