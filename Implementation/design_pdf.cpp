#include <iostream>
#include <vector>
using namespace std;

int max_height(string str, vector<int> vec)
{
    int count=0;
    vector<int> h;
    for(int i=0;i<str.length(); i++)
    {
        for (char c='a'; c<='z'; c++)
        {
            if(str[i]==c)
            {
                h.push_back(vec[count]);
            }
            count++;
        }
        count=0;
    }
    return *max_element(h.begin(), h.end());
}
int main()
{
    int a;
    string str;
    vector<int> height;
    for (int i=0; i<26; i++)
    {
        cin>>a;
        height.push_back(a);
    }
    cin>>str;
    cout<<max_height(str, height)*str.length();
}
