#include<stdio.h>
///Write a C program to find sum of all natural numbers between 1 to n.

int main(){

    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d\n",sum);

    return 0;
}
