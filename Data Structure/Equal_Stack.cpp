int totalHeight(vector<int> vec){
    return accumulate(vec.begin(), vec.end(), 0);
}
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int H1 = totalHeight(h1);
    int H2 = totalHeight(h2);
    int H3 = totalHeight(h3);
    int x;
    while(H1 != H2 || H2 != H3){
        x = max(H1, H2);
        x = max(x, H3);
        if(H1==x){
            H1 -= h1.front();
            h1.erase(h1.begin());
        }
        if(H2==x){
            H2 -= h2.front();
            h2.erase(h2.begin());
        }
        if(H3==x){
            H3 -= h3.front();
            h3.erase(h3.begin());
        }
    }
    return H1;
}
