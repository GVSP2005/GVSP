#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,wt;
    cin>>n>>wt;
    int w[n];
    long long int v[n];
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    long long int dp[wt+1]={};
    for(int i=0;i<n;i++){
        for(int j=wt;j>=w[i];j--){
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        }
    }
    cout<<dp[wt]<<endl;
}