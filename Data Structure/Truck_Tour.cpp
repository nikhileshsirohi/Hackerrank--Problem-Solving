int truckTour(vector<vector<int>> petrolpumps) {
    int n = petrolpumps.size();
    queue<pair<int, int>> Q;
    for(int i=0; i<n; i++){
        Q.push({petrolpumps[i][0], petrolpumps[i][1]});
    }
    int min_index=0;
    int remaining_petrol=0;
    for(int i=0; i<n; i++){
        int given_petrol = Q.front().first;
        int remaining_distance = Q.front().second;
        Q.pop();
        remaining_petrol += given_petrol;
        remaining_petrol -= remaining_distance;
        if(remaining_petrol < 0){
            min_index = i+1;
            remaining_petrol=0;
        }
    }
    return min_index;
}
