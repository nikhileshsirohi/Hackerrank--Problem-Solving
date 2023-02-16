#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,x,count=0;
    cin>>n>>x;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    for (int j=0; j<n; j++) {
        for (int k=j+1; k<n; k++) {
            if ((ar[j]+ar[k])%x==0) {
                count++;
            }
        }
    }
    cout<<count;
    
    return 0;    
}
