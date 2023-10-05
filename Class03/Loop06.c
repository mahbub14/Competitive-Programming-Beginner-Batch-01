#include<stdio.h>
///Write a C program to print all natural numbers in reverse (from n to 1).
int main(){

    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        printf("%d ",i);
    }

    return 0;
}
