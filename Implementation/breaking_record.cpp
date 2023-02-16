#include <iostream>
#include <vector>
using namespace std;

void result(int arr[], int m)
{
    int hscore=arr[0];
    int lscore=arr[0];
    int count_hscore=0;
    int count_lscore=0;
    for (int i=0; i<m; i++) {
        if(arr[i]>hscore){
            hscore=arr[i];
            count_hscore++;
        }
        if(arr[i]<lscore){
            lscore=arr[i];
            count_lscore++;
        }
    }
    cout<<count_hscore<<" "<<count_lscore;
}
int main()
{
    int m;
    cin>>m;
    int score[m];
    for (int i=0; i<m; i++) {
        cin>>score[i];
    }
    result(score, m);
        
    return 0;    
}
