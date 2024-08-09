#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];b[i]=1;
    }
    int maxi=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j]<=a[i]){
                b[i]=max(b[i],b[j]+1);
                if(b[i]>maxi)maxi=b[i];
            }
        }
    }
    cout<<maxi<<endl;
}