#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr)
{
    int n = arr.size();
    for (int j = 0; j < d; j++)
    {
        int x = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (i == n-1)
            {
            arr[n-1] = x;
            }
            else
            arr[i] = arr[i+1];
        }
    }
    return arr;
}
void display(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    
}
int main()
{
    int n,d,in;
    cin>>n>>d;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin>>in;
        arr.push_back(in);
    }
    display(rotateLeft(d, arr));
    return 0;
}