#include<stdio.h>
/// Write a C program to input a string long line

int main(){
    char n[100];
   // gets(n);
    scanf("%[^\n]", n);
    printf("%s\n",n);
    return 0;
}
