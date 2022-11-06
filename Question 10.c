#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b;
    printf("Let N=");
    scanf("%d", &b);
    printf("Count from 1 to %d: \n", b);
    for(a=1; a<=b; a++){
    printf("%d\n", a);
    }
    return 0;
    }