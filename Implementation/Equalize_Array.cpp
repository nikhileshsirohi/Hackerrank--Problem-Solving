#include <iostream>
#include <vector>
using namespace std;

int equalizeArray(vector<int> vec)
{
    int p = 1;
    int k;
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        k = 1;
        for (int j = i+1; j < vec.size(); j++)
        {
            if (vec[i] == vec[j])
            {
                k++;
            }
        }
        if (k>p)
        {
            p = k;
        }
    }
    cout<<p<<endl;
    return vec.size()-p;
}
int main()
{
    int n,in;
    vector<int> arr;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>in;
        arr.push_back(in);
    }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    
    cout<<equalizeArray(arr);
    return 0;
}