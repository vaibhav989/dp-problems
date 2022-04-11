// longest increasing substring 
#include <bits/stdc++.h>
using namespace std;
const int N= 25e5+10;
int a[N];
int DP[N];

int lis(int i){
    int ans=1;
    if(DP[i]!=-1){
        return DP[i];
    }
  for(int j=0;j<i;j++){
    if(a[i]>a[j]){
        ans= max(ans,lis(j)+1);
    }
  }
  return DP[i]=ans;
}



int main(){
    int n;
    cin>>n;
    memset(DP,-1,sizeof(DP));
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }
    // now it is our base case
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,lis(i));
    }
    cout<<ans;
}
