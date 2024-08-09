#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int m=s.length();
    int n=t.length();
    vector < vector <int> > dp(m,vector <int>(n,0));
    if(s[0]==t[0])dp[0][0]=1;
    for(int i=1;i<m;i++){
        if(s[i]==t[0])dp[i][0]=1;
        else if(dp[i-1][0]==1)dp[i][0]=1;
    }
    for(int i=1;i<n;i++){
        if(s[0]==t[i])dp[0][i]=1;
        else if (dp[0][i-1]==1)dp[0][i]=1;
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(s[i]==t[j])dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[m-1][n-1]<<endl;

}