#include<stdio.h>
///Write a C program to print all even numbers between 1 to N. 
int main(){


    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    printf("\n");

    return 0;
}
