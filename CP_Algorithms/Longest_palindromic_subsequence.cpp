#include <bits/stdc++.h>
using namespace std;
/*int lp(string &s,int in,int fi){
if(fi==in)return 1;
else if(fi-in==1){
    if(s[fi]==s[in])return 2;
    else return 0;
}
else{
    if(s[fi]==s[in])return 2+lp(s,in+1,fi-1);
    else return max(lp(s,in+1,fi),lp(s,in,fi-1));
}
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    cout<<lp(s,0,n-1)<<endl;
}
*/
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int maxi=1;
    int a[n][n]={};
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j<n;j++){
            if(i+j==n-1)a[i][j]=1;
            else{
                if(s[i]==s[n-1-j])a[i][j]=2+a[i-1][j-1];
                else a[i][j]=max(a[i-1][j],a[i][j-1]);
            }
            if(maxi<a[i][j])maxi=a[i][j];
        }
    }
    cout<<maxi<<endl;
}
/*
  4 3 2 1 0
0
1 
2
3
4
I had done dp in this way;

*/