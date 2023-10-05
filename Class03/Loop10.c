#include<stdio.h>
///Write a C program to print all odd number between 1 to N.

int main(){

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2){

            printf("%d ",i);

    }
    printf("\n");

    return 0;
}
