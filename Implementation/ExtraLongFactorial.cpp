#include <iostream>
#include <vector>
#define MAX 500
using namespace std;
void factorial(int n)
{
    int fact[500];
    int temp,carry=0, m=1;
    fact[0]=1;
    for (int i = 2; i <=n ; i++)
    {
        // carry=0;
        for (int j = 0; j < m; j++)
        {
            temp=(fact[j]*i)+carry;
            carry=temp/10;
            fact[j]=temp%10;
        }
        while(carry>0)
        {
            fact[m]=carry%10;
            m++;
            carry/=10;
        }
        
    }
    for (int i = m-1; i >=0 ; i--)
    {
        cout<<fact[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin >> n;
    factorial(n);

    return 0;
}