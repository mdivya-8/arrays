arrays
#WAP to find sum of array elements using recursion#
#include <stdio.h>


int findSum(int A[], int N)
{
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}
 
int main()
{
    int A[] = { 1, 2, 3, 4, 5 };
    int N = sizeof(A) / sizeof(A[0]);
    printf("%dn", findSum(A, N));
}

# WAP to find second largest num in an array #
#include<stdio.h>
void main(){
    int a[]={7,9,11,9,6};
    int l=0,s=0,i=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
        if(a[i]>l){
            s=l;
            l=a[i];
        }
        else if(a[i]>s){
            s=a[i];
        }
    }
        printf("second largest is %d",s);
}
