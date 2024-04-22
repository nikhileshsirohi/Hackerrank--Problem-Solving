#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

void SimpleTextEditor(vector<string> op){
    op.push_back("9");
    int n = op.size();
    string S="";
    stack<string> Stk;
    for(int i=0; i<n-1; i++){
        if(op[i][0]=='1'){
            Stk.push(S);
            S += op[i].substr(2);
        }else if(op[i][0]=='2'){
            Stk.push(S);
            int n = S.size();
            int k = stoi(op[i].substr(2));
            S.erase(n-k);
        }else if(op[i][0]=='3'){
            int k = stoi(op[i].substr(2));
            cout<<S[k-1]<<endl;
        }else if(op[i][0]=='4'){
            if(!Stk.empty()){
                S=Stk.top();
                Stk.pop();
            }
        }
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q;
    string input;
    cin>>Q;
    cin.ignore();
    vector<string> operations;
    for(int i=0; i<Q; i++){
        getline(cin, input);
        operations.push_back(input);
    }
    SimpleTextEditor(operations);
    return 0;
}
