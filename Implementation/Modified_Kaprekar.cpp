#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool iskaprekar(int a)
{
    int sq = pow(a,2);
    int d = log10(a)+1;
    int x = pow(10,d);
    int r = sq%x;
    int l = sq/x;
    if (r+l == a)
    {
        return true;
    }
    else
    return false;
}
void kaprekarNumbers(int p, int q)
{
    vector<long> kap;
    for (int i = p; i <= q; i++)
    {
        if (iskaprekar(i))
        {
            kap.push_back(i);
        }
    }
    if (kap.size() == 0)
    {
        cout<<"INVALID RANGE";
    }
    else
    for (int i = 0; i < kap.size(); i++)
    {
        cout<<kap[i]<<" ";
    }
    
    
    
}
int main()
{
    int p,q;
    cin>>p>>q;
    kaprekarNumbers(p,q);

    return 0;
}