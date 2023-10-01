#include<stdio.h>

int main(){
    printf(__TIME__);
    printf("\n");
    printf(__DATE__);
    printf("\n");
    printf(__func__);
    printf("\n");
    printf("%d\n",__LINE__);

    return 0;
}
