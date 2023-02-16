#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    if(s[6]=='P')
    {
        if(n==12)
        {
            cout<<n;
        }
        else
        {
            n=n+12;
            cout<<n;
        }
    }
    else
    {
        if(n==12)
        {
            cout<<"00";
        }
        else
        {
            cout<<"0"<<n;
        }
    }
    s.erase(6);
    cout<<s;
    return 0;
}
