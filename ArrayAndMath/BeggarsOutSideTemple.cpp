vector<int> Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> amount(A, 0);
    for(int i = 0; i < B.size(); i++) {
        amount[B[i][0]-1] += B[i][2];
        if(B[i][1] < A) {
            amount[B[i][1]] -= B[i][2];
        }
    }
    for(int j = 1; j<A; j++) {
        amount[j] += amount[j-1];
    }
    return amount;
}