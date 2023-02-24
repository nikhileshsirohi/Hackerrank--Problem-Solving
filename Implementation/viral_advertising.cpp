#include <iostream>
#include <vector>
using namespace std;
int viralAdvertising(int n)
{
    int like=2,count=2;
    for (int i = 1; i < n; i++)
    {
        like=(like*3)/2;
        count=count+like;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<viralAdvertising(n);
    return 0;
}