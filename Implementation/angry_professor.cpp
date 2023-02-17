#include <iostream>
#include <vector>
using namespace std;

void result(int arr[], int k, int n)
{
    int count=0;
    for (int i=0; i<n; i++)
    {
        if (arr[i]<=0)
        {
            count++;
        }
    }
    if (count>=k)
    {
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;
}
int main()
{
    int x,n,k;
    cin>>x;
    for (int i=0; i<x; i++)
    {
        cin>>n>>k;
        int arr[n];
        for (int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        result(arr,k,n);
    }
}