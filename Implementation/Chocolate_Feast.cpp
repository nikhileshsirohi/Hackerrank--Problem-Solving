#include <iostream>
#include <vector>
using namespace std;

int chocolateFeast(int n, int c, int m)
{
    int s = n/c;
    int w = s/m;
    int r = s%m;
    int total = s+w;
    int k=w+r;
    while (k >= m)
    {
        w = k/m;
        r = k%m;
        total+=w;
        k = w+r;
    }
    return total;
}

int main()
{
    int a,n,c,m;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cin>>n>>c>>m;
        cout<<chocolateFeast(n,c,m)<<endl;
    }
    
    return 0;
}