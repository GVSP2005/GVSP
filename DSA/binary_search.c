#include <stdio.h>
int bin_search(int a[],int n,int k){int f=0,l=n-1;
    while(f<l){
        int mid=(f+l)/2;
        if(a[mid]==k)return mid;
        else{
            if(a[mid]>k)l=mid;
            else f=mid+1;
        }
    }
    return f;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int f=0,l=n-1;
    int key;
    scanf("%d",&key);
    int ind=bin_search(a,n,key);
     if(a[ind]!=key) printf("%d is not found in the array and the upper bound is %d\n",key,ind);
     else printf("%d is found in %d(0 indexing) element of array\n",key,ind);   
    }
