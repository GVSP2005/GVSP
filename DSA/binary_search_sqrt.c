#include <stdio.h>
int bin_fun(float n){if(n<0)return -1;
    int f=0,l=n;
    // if we didn't put f=mid+1 rather if we use f=mid consider the case 1 2 3 4 5, and key=2.5;
    //if not decimals put 10 20 30 40 50 25;
    while(f<l){
        int mid=(f+l)/2;
        if(mid*mid==n)return mid;
        else{
            if(mid*mid>n)l=mid;
            else f=mid+1;
        }
    }
    return f;
}
int main(){
    float n;
    scanf("%f",&n);//don't put gap after %d it may led to errors or not outputting anything;

    int upb=bin_fun(n);
    
    if(upb==-1)printf("sorry we can't find square root of this number\n");
    else{
        if(upb*upb==n)printf("square root of %0.f is %d",n,upb);
        else{
            double f=upb-1,l=upb;int i=0;
            while(f<l){
                double mid=(f+l)/2;
                if(mid*mid>=n)l=mid;
                else f=mid+0.000001;//max precision 6;
            }
            printf("square root of %f is %f",n,f);
        }
    }
}