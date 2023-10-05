#include<stdio.h>
///Write a C program to calculate sum of digits of a number.


int main(){

    int n;
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n=n/10;

    }
    printf("%d\n",sum);

    return 0;
}
