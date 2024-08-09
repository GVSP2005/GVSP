#include <stdio.h>
#include <stdlib.h>
#include <time.h>
long int insertion_sort(int a[],int n){
for(int i=1;i<n;i++){
        for(int j=i-1;j>=0&&a[j]>a[j+1];j--){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
int main(){//Enter the number of elements and the array ;
    int n=1000;
    int a[n];
    for(int i=0;i<n;i++)a[i]=n-i;
    clock_t t=clock();
    insertion_sort(a,n);
    t=clock()-t;
    printf("Sorted array 1:");
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    printf("\n");
    double time_value=((double)t)/CLOCKS_PER_SEC;
    printf("time taken for array:%f\n",time_value);
    
}