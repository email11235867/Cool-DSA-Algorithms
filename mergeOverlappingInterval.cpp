/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool mycmp(Interval a,Interval b){
    return a.start<b.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    
    // first sort the vector
    sort(A.begin(),A.end(),mycmp);
    // define vector of intervals
    vector <Interval> c;
    // define an interval with starting index if A[0]
    Interval b=A[0];
    bool flag = true;
    for(int i=1;i<A.size();i++){
        if(A[i].start<=b.end){
            // traverse through A and if b merges with A[i] update b
            b.end = max(b.end,A[i].end);
            b.start = min(b.start,A[i].start);
        }
        // if b does not merges with A[i] push b into c and update b=A[i]
        else{
  // checking exclusively for last element of vector
            if(i==A.size()-1){
                flag = false;
                c.push_back(b);
                c.push_back(A[i]);
            }
            else{
               c.push_back(b);
                b=A[i];
            }
           
           
        }
    }
    if(flag==true){
        c.push_back(b);
    }
   
   
    return c;
}
