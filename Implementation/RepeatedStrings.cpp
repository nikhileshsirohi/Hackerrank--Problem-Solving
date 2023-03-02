#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
long repeatedString(string s, long n)
{
    long count_a=0, count_r=0;
    long times=n/s.length();
    for (int i=0; i<s.length(); i++)
    {
        if (s[i]=='a')
        {
            count_a++;
        }
                
    }
    for (int i=0; i<(n%s.length()); i++)
    {
        if (s[i]=='a')
        {
            count_r++;
        }
    }
    long ans=count_a*times;
    return ans+count_r;
}
int main()
{
    string s;
    int n;
    cin>>s;
    cin>>n;
    cout<<repeatedString(s,n);
    
    return 0;
}