#include <iostream>
#include <vector>
using namespace std;

long taumBday(int b, int w, int bc, int wc, int z) {
    long k=wc;
    if(z<(wc-bc))
    {
        k=z+bc;
    }
    long l=bc;
    if(z<(bc-wc))
    {
        l=z+wc;
    }

long a= (b*l+ w*k);
return a;
}
int main()
{
    int n;
    cin>>n;
    int b, w, bc, wc, z;
    for (int i = 0; i < n; i++)
    {
        cin>>b>>w>>bc>>wc>>z;
        cout<<taumBday(b, w, bc, wc, z);
    }
    
    return 0;
}