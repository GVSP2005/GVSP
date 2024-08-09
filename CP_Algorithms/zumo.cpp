#include <bits/stdc++.h>
using namespace std;
vector <int > v;
int max_ss(int in,int fin){

}
vector <int > lps(int in,int fin){
    vector < vector <int> > w(fin-in+1,vector <int > (fin-in+1,0));
    for(int i=0;i<=fin-in;i++){
        for(int j=fin-in-i;j<=fin-in;j++){
            if(j+i==fin-in)w[i][j]=1;
            else{
                if(v[i+in]==v[fin-j])w[i][j]=w[i-1][j-1]+2;
                else w[i][j]=max(w[i-1][j],w[i][j-1]);
            }
        }
    }
    vector <int > a;
    int i=in,j=fin;
    while(i<=j){
        if(v[i]==v[j]){
            if(i==j)a.push_back(i);
            else a.push_back(i),a.push_back(j);
            i++;j--;
        }
        else{
            if(w[])
        }
    }
     
}
int main(){
int n;cin>>n;
for(int i=0;i<n;i++){
    int t;cin>>t;v.push_back(t);
}
cout<<max_ss(0,n-1);
}