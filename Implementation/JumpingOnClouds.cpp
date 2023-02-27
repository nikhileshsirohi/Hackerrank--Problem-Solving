#include <iostream>
#include <vector>
using namespace std;
int jumpingOnClouds(vector<int> c, int k)
{
    int i=0,mod=(i+k)%c.size(),count=0;
    do
    {
        count++;
        if (c[mod]==1)
        {
            count+=2;
        }
        i=mod;
        mod=(i+k)%c.size();
    }
    while(i!=0);
    return 100-count;
}
int main()
{
    int n,k,b;
    cin>>n>>k;
    vector<int> cloud;
    for (int i = 0; i < n; i++)
    {
        cin>>b;
        cloud.push_back(b);
    }
    cout<<jumpingOnClouds(cloud,k);
    return 0;
}