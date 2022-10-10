For all elements of an anti diagonal sum of i and j will be same where i is row number and j is column number.
For a square matrix of size n there will be 2*n-1 diagonals

int n = A.size();

vector<vector<int>> res(2*n-1);

for(int i=0;i<n;i++)

{

for(int j=0;j<n;j++)

{ res[i+j].push_back(A[i][j]); }

}

return res;

//Time complexity : O(n*n)
