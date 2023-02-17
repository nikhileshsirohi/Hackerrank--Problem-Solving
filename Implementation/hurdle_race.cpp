#include <iostream>
#include <vector>
using namespace std;

int result(vector<int> vec, int k)
{
    int max=*max_element(vec.begin(), vec.end());
    cout<<max<<endl;
    if (max>k) {
    return (max-k);
    }
    else
    return 0;
}
int main()
{
    int n,k,a;
    cin>>n>>k;
    vector<int> hurdle;
    for (int i=0; i<n; i++)
    {
        cin>>a;
        hurdle.push_back(a);
    }
    cout<<result(hurdle, k);
    return 0;
}