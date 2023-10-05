#include<stdio.h>
///Write a C program to count number of digits in a number.

int main(){

    int n;
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("%d\n",count);

    return 0;
}
