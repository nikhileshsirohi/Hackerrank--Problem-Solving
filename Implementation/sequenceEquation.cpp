#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> vec);
int position(vector<int> vec, int k);
vector<int> permutationEquation(vector<int> p);
int position(vector<int> vec, int k)
{
    vector<int> :: iterator rank;
    rank= find(vec.begin(), vec.end(), k);
    int index= distance(vec.begin(), rank);
    if(rank!=vec.end())
    {
        return index+1;
    }
    else
    return 1;
}
vector<int> permutationEquation(vector<int> p)
{
    vector<int> temp,ans;
    for (int i = 1; i <= p.size(); i++)
    {
        temp.push_back(position(p,i));
    }
    for (int i = 0; i < temp.size(); i++)
    {
        ans.push_back(position(p, temp[i]));
    }
    return ans;
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
    int a,b;
    cin>>a;
    vector<int> vec;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        vec.push_back(b);
    }
    display(permutationEquation(vec));
    return 0;
}