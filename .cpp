binary search 
int bs(vector<int> v,int target){
int s=v.size();
int lo=0,hi=s-1,mid=0,ans=0;

  while(lo<=hi){
    mid=lo+(hi-lo)/2;
    if(v[mid]==target)ans=mid;
    else if(v[mid]<target)lo=mid+1;
    else hi=mid-1;
  }
return ans;
}
