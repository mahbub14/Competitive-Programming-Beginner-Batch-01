#include<stdio.h>
///Write a C program to print all even numbers between 1 to N. 
int main(){


    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2){

            printf("%d ",i);

    }
    printf("\n");

    return 0;
}
