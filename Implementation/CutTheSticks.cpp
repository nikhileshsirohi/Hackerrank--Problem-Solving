#include <iostream>
#include <vector>
using namespace std;

vector<int> cutTheSticks(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    vector<int> ans;
    int count=0;
    for (int i = 0; i < arr.size(); i++)
    {
        
        if (arr[i]==count)
        {
            continue;
        }
        count+=arr[i]-count;
        ans.push_back(arr.size()-i);
    }  
    return ans;
}

int main()
{
    int n, a;
    cin >> n;
    vector<int> stick;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        stick.push_back(a);
    }
    for (int i = 0; i < cutTheSticks(stick).size(); i++)
    {
        cout << cutTheSticks(stick)[i] << " ";
    }

    return 0;
}