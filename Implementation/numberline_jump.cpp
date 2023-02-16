#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    if (x1 < x2)
    {
        if (v1 <= v2)
        {
            cout << "NO";
        }
        else
        {
            while (x1 != x2)
            {
                x1 += v1;
                x2 += v2;
                if (x1>x2)
                {
                    cout<<"NO";
                    exit(0);
                }   
            }
            cout << "YES";
        }
    }
    else
    {
        if (v1 > v2)
        {
            cout << "NO";
        }
        else
        {
            {
                while (x1 != x2)
                {
                    x1 += v1;
                    x2 += v2;
                    if(x1>x2)
                    {
                        cout<<"NO";
                        exit(0);
                    }
                }

                cout << "YES";
            }
        }
    }

    return 0;
}
