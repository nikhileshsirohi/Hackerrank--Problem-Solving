#include <iostream>
#include <vector>
using namespace std;

int result(int x)
{
    int a=1;
    for (int i=1; i<=x; i++)
    {
        if (i%2!=0)
        {
            a=a*2;
        }
        else
        {
            a=a+1;
        }
    }
    return a;
}
int main()
{
    int n,a;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>a;
        cout<<result(a)<<endl;
    }
}
