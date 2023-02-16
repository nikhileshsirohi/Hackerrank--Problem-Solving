#include <iostream>
#include <vector>
using namespace std;

int result(int n, int p)
{
    int mid=n/2;
    if (p<=mid)
    {
        return p/2;
    }
    else
    {
        if(n%2==0){
        return ((n-p)+1)/2;
        }
        else
        return (n-p)/2;
    }
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << result(n, p);
    return 0;
}