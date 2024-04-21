#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    int n, q, lastAnswer=0, seq, pos;
    cin>>n>>q;
    vector<vector<int> > ans(n);
    for(int i=0; i<q; i++){
        int q,x,y;
        cin>>q>>x>>y;
        seq = (x^lastAnswer)%n;
        if(q==1){
            ans[seq].push_back(y);
        }else{
            pos = y%size(ans[seq]);
            lastAnswer = ans[seq][pos];
            cout<<lastAnswer<<endl;
        }
    }
    return 0;
}
