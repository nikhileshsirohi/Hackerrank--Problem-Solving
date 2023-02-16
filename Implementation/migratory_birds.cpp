#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n,a,max=0;
   cin>>n;
   int arr[n];
   for (int i=0; i<n; i++)
   {
    cin>>arr[i];
   }
   for (int i=1; i<=5; i++)
   {
       int count=0;
       for (int j=0; j<n; j++)
       {
           if(arr[j]==i)
           {
               count++;
           }
           if(max<count)
           {
               max=count;
               a=j;
           }
       }
   }
   cout<<arr[a];
    return 0;
}