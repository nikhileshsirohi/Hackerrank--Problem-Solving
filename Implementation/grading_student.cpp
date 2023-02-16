#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        cin>>marks[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (marks[j]>=38)
        {
            int x=marks[j]%5;
            if (x>=3)
            {
                marks[j]=marks[j]-x+5;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<marks[i]<<endl;
    }
    
    
    return 0;
}
