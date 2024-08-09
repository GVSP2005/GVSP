#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int a[n];
int b[2*n-1];
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<2*n-1;i++){
    if(i%2==0){int j;int tem=i/2;
        for(j=0;tem-j>=0&&tem+j<n;j++){
            
            if(a[tem-j]!=a[tem+j])break;
        }
        b[i]=2*j-1;
    }
    else{
        int j;
        int tem=i/2;
        for(j=0;tem-j>=0&&tem+j+1<n;j++){
            if(a[tem-j]!=a[tem+j+1])break;
        }
        b[i]=2*(j);
    }

}
int max=0,ind=0;
for(int i=0;i<2*n-1;i++){cout<<b[i]<<" ";
if(b[i]>max)ind=i,max=b[i];
}
cout<<endl<<"b over"<<endl;
cout<<"max"<<max<<";Ind:"<<ind<<endl;
if(ind%2==1){
for(int i=ind/2-max/2+1;i<=ind/2+max/2;i++)cout<<a[i]<<" ";
}
else{
    for(int i=ind/2-max/2;i<=ind/2+max/2;i++)cout<<a[i]<<" ";
}


}



