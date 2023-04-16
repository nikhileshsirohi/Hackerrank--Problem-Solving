#include <iostream>
#include <vector>
using namespace std;
int beautifulTriplets(int d, vector<int> arr)
{
    int i, j, k, x, y;
    int p = 0;
    int n = arr.size();
    for (i = 0; i < n - 2; i++)
    {
        int q = 0;
        x = arr[i] + d;
        y = x + d;
        for (j = i + 1; j < n - 1; j++)
        {
            if (x == arr[j])
            {
                for (k = j + 1; k < n; k++)
                {
                    if (y == arr[k])
                    {
                        p++;
                        q = 1;
                        break;
                    }
                }
            }
            if (q == 1)
            {
                break;
            }
        }
    }
    return p;
}

int main()
{
    int n, d, in;
    cin >> n >> d;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        arr.push_back(in);
    }
    cout << beautifulTriplets(d, arr);
    return 0;
}