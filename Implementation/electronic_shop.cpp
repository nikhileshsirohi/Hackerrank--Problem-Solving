#include <iostream>
#include <vector>
using namespace std;

int result(vector<int> key, vector<int> usb, int b)
{
    vector<int> ans;
    int k;
    for (int i = 0; i < key.size(); i++)
    {
        for (int j = 0; j < usb.size(); j++)
        {
            ans.push_back(key[i] + usb[j]);
        }
    }
    sort(ans.begin(), ans.end());
    if (ans[0] > b)
    {
        return -1;
    }
    else
    {
        for (k = 0; k < ans.size(); k++)
        {
            if (ans[k] > b)
            {
                break;
            }
        }
        return ans[k - 1];
    }
}
int main()
{
    int budget, a, c, x, y;
    cin >> budget >> a >> c;
    vector<int> keyboard;
    vector<int> usb;
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        keyboard.push_back(x);
    }
    for (int i = 0; i < c; i++)
    {
        cin >> y;
        usb.push_back(y);
    }
    cout << result(keyboard, usb, budget);
    return 0;
}