#include<stdio.h>
///Write a C program to find sum of all even numbers between 1 to n.
int main(){

    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0) sum+=i;
    }
    printf("%d\n",sum);

    return 0;
}
