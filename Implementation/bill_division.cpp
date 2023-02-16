#include <iostream>
#include <vector>
// for accumulate
#include <numeric>
using namespace std;

int main()
{
    int n, k, b, a;
    cin >> n >> k;
    vector<int> bill;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        bill.push_back(a);
    }
    cin >> b;
    int total = std::accumulate(bill.begin(), bill.end(), 0);
    int sum1 = (total - bill[k]) / 2;
    int sum2 = (total / 2);
    if (b == sum1)
    {
        cout << "Bon Appetit";
    }
    else
        cout << (sum2 - sum1);

    return 0;
}