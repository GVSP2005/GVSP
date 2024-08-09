#include <bits/stdc++.h>
using namespace std;
//dp is based on values here due to conditions on values 1<=v[i]<=1000;
//knapsack problem is on atcoder,link:https://atcoder.jp/contests/dp/tasks/dp_e
int main(){
    int n;
    long long int wt;
    cin>>n>>wt;
    long long int w[n],v[n],total=0,twt=0;
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
        total+=v[i];
        twt+=w[i];
    }
    long long int dp[total+1]={0};
    for(int i=1;i<=total;i++)dp[i]=twt;
    for(int i=0;i<n;i++){
        for(int j=total;j>=v[i];j--){
            dp[j]=min(dp[j],dp[j-v[i]]+w[i]);
        }
    }
    for(int i=total;i>=0;i--){
        if(dp[i]<=wt){
            cout<<i<<endl;
            break;
        }
    }
}