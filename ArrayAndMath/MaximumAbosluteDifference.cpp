int Solution::maxArr(vector<int> &A) {
    vector<int> array1;
    vector<int> array2;
    int n = A.size();
    for (int i = 0; i<n; i++) {
        array1.push_back(A[i]+i+1);
        array2.push_back(A[i]-(i+1));
    }
    int max1 = (*max_element(array1.begin(), array1.end()))-(*min_element(array1.begin(), array1.end()));
    int max2 = (*max_element(array2.begin(), array2.end()))-(*min_element(array2.begin(), array2.end()));
    if(max1 > max2) {
        return max1;
    } else {
        return max2;
    }
}