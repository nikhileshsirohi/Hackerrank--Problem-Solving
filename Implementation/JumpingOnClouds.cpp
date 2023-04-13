#include <iostream>
#include <vector>
using namespace std;
int jumpingOnClouds(vector<int> c)
{
    int count = 0;
    int i = 0;
    while (i<c.size()-1)
    {
        if(c[i+1] == 0)
        {
            if (c[i+2] == 0)
            {
                count++;
                i+=2;
            }
            else
            {
                count++;
                i++;
            }
        }
        else
        {
            if (c[i+2] == 0)
            {
                count++;
                i+=2;
            }
            
        }
        
    }
    return count;
    
}
int main()
{
    int n,b;
    cin>>n;
    vector<int> cloud;
    for (int i = 0; i < n; i++)
    {
        cin>>b;
        cloud.push_back(b);
    }
    cout<<jumpingOnClouds(cloud);
    return 0;
}