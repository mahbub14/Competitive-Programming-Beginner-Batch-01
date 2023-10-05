#include<stdio.h>
///Write a C program to print all natural numbers from 1 to n. 
int main(){

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }

    return 0;
}
