#include <iostream>
using namespace std;

int result(char c[], int n)
{
    int temp=0,count=0;
    for(int i=0; i<n; i++)
    {
        if(c[i]=='U')
        {
            temp++;
            if(temp==0)
            {
                count++;
            }
        }
        else if(c[i]=='D')
        {
            temp--;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    char step[n];
    cin>>step;
    cout<<result(step,n);

    return 0;
}
