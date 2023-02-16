#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    long long int sum=0;
    cin>>n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum;
    
    return 0;
}
