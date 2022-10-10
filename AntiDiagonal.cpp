vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int> > ans;
    for(int i=0;i<A.size();i++){
        vector<int> helper;
          int j=i;
          int k=0;
         while(j>=0 && k<A.size()){
             helper.push_back(A[k][j]);
             j--;
             k++;
         }
         ans.push_back(helper);
        
         
         
    }
    int n = A.size();
    for(int i=1;i<A.size();i++){
        vector<int> helper;
        int j = n-1;
        int k=i;
        while(j>=0 && k<A.size()){
            helper.push_back(A[k][j]);
            k++;
            j--;
        }
        ans.push_back(helper);
    }
    return ans;
}
