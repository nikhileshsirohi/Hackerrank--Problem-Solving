#include <iostream>
#include <vector>
using namespace std;
int saveThePrisoner(int n, int m, int s)
{
    int ans = m % n + s - 1;
    if (ans > n)
    {
        ans -= n;
    }
    else if (ans == 0)
    {
        ans = n;
    }
    return ans;
}
int main()
{
    int a;
    cin >> a;
    int prisoner, candy, chair;
    for (int i = 0; i < a; i++)
    {
        cin >> prisoner >> candy >> chair;
        cout << saveThePrisoner(prisoner, candy, chair)<<endl;
    }
    return 0;
}