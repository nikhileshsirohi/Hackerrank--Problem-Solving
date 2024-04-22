string isBalanced(string s) {
    int n= s.length();
    stack<char> Stk;
    for(int i=0; i<n; i++){
        // if(Stk.empty() || s[i]=='{' || s[i]=='[' || s[i]=='(')
        //         Stk.push(s[i]);
        if(Stk.empty())
            Stk.push(s[i]);
        else if(Stk.top()=='{' && s[i]=='}')
            Stk.pop();
        else if(Stk.top()=='[' && s[i]==']')
            Stk.pop();
        else if (Stk.top()=='(' && s[i]==')')
            Stk.pop();
        else
            Stk.push(s[i]);
            
    }
    if(Stk.empty())
        return "YES";
    else
        return "NO";
}
