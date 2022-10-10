int Solution::repeatedNumber(const vector<int> &A) {
   
    // int hsh[A.size()+1] ={0};
    // for(int i=0;i<A.size();i++){
    //     ++hsh[A[i]];
    //    if(hsh[A[i]]>1)return A[i];
    // }
   
    // return -1;
    int slow=arr[0];
    int fast=arr[0];

    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
    }while(slow!=fast);

    slow=arr[0];
    while(slow!=fast)
    {
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
    
}
