#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int squares(int a, int b)
{
    int count = floor(sqrt(b))-ceil(sqrt(a));
    return count+1;
}
int main()
{
    int n,a,b;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        cout<<squares(a,b)<<endl;
    }

    return 0;
}