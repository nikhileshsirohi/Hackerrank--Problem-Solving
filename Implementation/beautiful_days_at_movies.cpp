#include <iostream>
#include <vector>
#include <cstdlib>
#include <math.h>
using namespace std;
int rev(int x);
int check (int i, int j, int k);
int main()
{
    int s,e,k;
    cin>>s>>e>>k;
    cout<<check(s,e,k);
    
    return 0;
}
int rev(int x)
{
    int sum=0;
    int r;
    while(x!=0)
    {
        r=x%10;
        sum=10*sum+r;
        x=x/10;
    }
    return sum;
}
int check(int i, int j, int k)
{
    int x=0,count=0;
    vector<int> day, rev_day;
    for (int a = i; a <= j; a++)
    {
        day.push_back(a);
        rev_day.push_back(rev(day[x]));
        x++;
    }
    for (int b = 0; b < x; b++)
    {
        if(abs(day[b]-rev_day[b])%k==0)
        {
            count++;
        }
    }

    return count;
    
}