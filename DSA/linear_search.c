#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int LinSer(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key)return i;
    }
    return -1;
}
int main(){
    int n=1000;
    int a[n];
    srand(123);
    for(int i=0;i<n;i++)a[i]=1+(rand())%1000;
    printf("following is the array\n");
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    int key;
    printf("\nEnter the search key\n");
    scanf("%d",&key);
    int ind=LinSer(a,n,key);
    if(ind==-1)printf("%d is not found\n",key);
    else printf("The first index where %d appeared was %d\n",key,ind);
    
}