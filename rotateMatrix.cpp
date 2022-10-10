void Solution::rotate(vector<vector<int> > &matrix) {
   reverse(matrix.begin(), matrix.end());
    for(int i = 0; i<matrix.size(); i++) {
        for(int j = i + 1; j<matrix[i].size(); j++) 
            swap(matrix[i][j], matrix[j][i]);
    }
}
//here we will find the transpose then reverse every row to rotate matrix by 90 degrees:)
