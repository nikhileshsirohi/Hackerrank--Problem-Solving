#include <iostream>
#include <vector>
using namespace std;
vector<int> reverseArray(vector<int> a)
{
    int n = a.size();
    int x,z;
    z = n-1;
    // if(n%2 == 0)

        for (int i = 0; i < (n/2); i++)
        {
            x = a[i];
            a[i] = a[z-i];
            a[z-i] = x;
        }
    return a;
}
int main()
{
    int a,in;
    vector<int> arr;
    for (int i = 0; i < a; i++)
    {
        cin>>in;
        arr.push_back(in);
    }
    for (int i = 0; i < a; i++)
    {
        cout<<reverseArray(arr)[i]<<" ";
    }
    
    return 0;
}