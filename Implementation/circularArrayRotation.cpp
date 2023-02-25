#include <iostream>
#include <vector>
using namespace std;
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries)
{
    vector<int> ans;
    for(int i=0; i<k; i++)
    {
        rotate(a.begin(), a.begin()+(a.size()-1), a.end());
    }
    for(int i=0; i<queries.size(); i++)
    {
        ans.push_back(a[queries[i]]);
    }
    return ans;
}
int main()
{
    int a,b,x,y,k;
    cin>>x>>k>>y;
    vector<int> vec,queries;
    for (int i = 0; i < x; i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    for (int i = 0; i < y; i++)
    {
        cin>>b;
        queries.push_back(b);
    }
    for (int i = 0; i < circularArrayRotation(vec,k,queries).size(); i++)
    {
        cout<<circularArrayRotation(vec,k,queries)[i]<<endl;
    }
        
    return 0;
}