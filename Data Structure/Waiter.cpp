bool isPrime(int num){
    if(num==2 || num==3 || num==5)
        return true;
    else if(num%2==0 || num%3==0 || num%5==0)
        return false;
    else{
        for(int i=5; i<num/2; i+=6){
            if(num%i==0 || num%(i+2)==0)
                return false;
        }
    }
    return true;
}
vector<int> qPrimes(int q){
    vector<int> prime;
    int count=0;
    int num=2;
    while(count<q){
        if(isPrime(num)){
            prime.push_back(num);
            count++;
        }
        num++;
    }
    return prime;
}
vector<int> waiter(vector<int> number, int q) {
    stack<int> myStack;
    vector<int> primes, ans;
    int n = number.size();
    for(auto i: number){
        myStack.push(i);
    }
    primes = qPrimes(q);
    while(q--){
        stack<int> A, B;
        vector<int> help;
        while(!myStack.empty()){
            int num = myStack.top();
            if(num%primes.front()==0){
                help.push_back(num);
            }else{
                A.push(num);
            }
            myStack.pop();
        }
        reverse(help.begin(), help.end());
        ans.insert(ans.end(), help.begin(), help.end());
        primes.erase(primes.begin());
        myStack = A;
        if(myStack.empty()){
            break;
        }
    }
    if(!myStack.empty()){
        vector<int> help;
        while(!myStack.empty()){
            int num = myStack.top();
            help.push_back(num);
            myStack.pop();
        }
        ans.insert(ans.end(), help.begin(), help.end());
    }
    return ans;
}
