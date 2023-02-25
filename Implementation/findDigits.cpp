#include <iostream>
#include <vector>
using namespace std;
int findDigits(int num)
{
    int r, count=0;
    int org=num;
    while(num!=0)
    {
        r=num%10;
        if (r!=0 && org%r==0)
        {
            count++;
        }
        num=num/10;
    }
    return count;
}
int main()
{
    int a,num;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cin>>num;
        cout<<findDigits(num)<<endl;
    }
    
    return 0;
}