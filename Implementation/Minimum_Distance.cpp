#include <iostream>
#include <vector>
using namespace std;

int minimumDistances(vector<int> a)
{
    int n = a.size();
    int temp;
    int min=n;
    int p=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                temp = j-i;
                p++;
            }
            if (temp<min)
            {
                min = temp;
            }
        }
    }
    if (p == 0)
    {
        return -1;
    }
    else
    return min;
}
int main()
{
    int n,in;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin>>in;
        arr.push_back(in);
    }
    cout<<minimumDistances(arr);
    return 0;
}