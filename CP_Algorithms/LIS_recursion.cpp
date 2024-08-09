#include <bits/stdc++.h>
using namespace std;
int liatp(int a[],int n,int *maxi){//longest increasing sequence at that point-liatp;
    if(n==1)return 1;
    int maxi_len=1,res;
    for(int i=1;i<n;i++){
        res=liatp(a,i,maxi);
        if(a[i-1]<a[n-1]&&res+1>maxi_len)maxi_len=res+1;
    }
    if(*maxi<maxi_len)*maxi=maxi_len;
    return maxi_len;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int *maxi=new int;//we can't use directly as int*maxi;*maxi=1;
    //first we need to allocate memory to the pointer also we can't use null
    //we use null so that later we can point it to something
    //instead pointer we can use directly int maxi; like that
    //then we pass with &maxi
    *maxi=1;
    int t=liatp(a,n,maxi);
    cout<<*maxi<<endl;
    delete maxi;

}