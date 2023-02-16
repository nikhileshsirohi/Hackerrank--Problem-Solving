#include <iostream>
#include <vector>
using namespace std;

int count(int *arr, int s, int t, int m)
{
    int a = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr[i] >= s && arr[i] <= t)
        {
            a++;
        }
    }
    return a;
}
int main()
{
    int s, t, a, o, m, n;
    cin >> s >> t;
    cin >> a >> o;
    cin >> m >> n;
    int apples[m], oranges[n];
    int dis_apples[m], dis_oranges[n];

    for (int i = 0; i < m; i++)
    {
        cin >> apples[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> oranges[j];
    }

    for (int k = 0; k < m; k++)
    {
        dis_apples[k] = a + apples[k];
    }
    for (int l = 0; l < n; l++)
    {
        dis_oranges[l] = o + oranges[l];
    }
    cout << count(dis_apples, s, t, m) << endl
         << count(dis_oranges, s, t, n);

    return 0;
}
