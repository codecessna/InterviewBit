int Solution::trap(const vector<int> &A) {
    vector<int> array1;
    vector<int> array2 = A;
    int max = 0;
    int maxr = 0;
    int area = 0;
    for(int i = 0; i< A.size(); i++) {
        array1.push_back(max);
        if(max < A[i]) {
            max = A[i];
        }
    }
    for(int j = A.size()-1; j>=0; j--) {
        array2[j] = maxr;
        if(maxr < A[j]) {
            maxr = A[j];
        }
    }
    for (int k = 0; k < A.size(); k++ ) {
        if(array1[k] <= array2[k]) {
            if(A[k] < array1[k]) {
                area = area+(array1[k]-A[k]);
            }
        } else {
            if(A[k] < array2[k]) {
                area = area+(array2[k]-A[k]);
            }
        }
    }
    return area;
}