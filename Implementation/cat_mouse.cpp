#include <iostream>
#include <vector>
using namespace std;

int mod(int a)
{
    if(a<0)
    {
        a=a*(-1);
    }
    return a;
}
string ans(int x, int y, int z)
{
    int a=mod(z-x);
    int b=mod(z-y);
    if (a<b)
    {
        return "Cat A";
    }
    else if(a>b)
    {
        return "Cat B";
    }
    else
    return "Mouse C";
}
int main()
{
    int q,x,y,z;
    cin>>q;
    for (int i=0; i<q; i++) {
    cin>>x>>y>>z;
    cout<<ans(x,y,z)<<endl;
    }
    return 0;
}