#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int m=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        m++;
        for (int j = (n-1); j > i; j--)
        {
            cout<<" ";
        }
        for (int k = 0; k < m; k++)
        {
            cout<<"#";
        }
        cout<<endl;        
    }
    return 0;
}
