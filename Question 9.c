#include<stdio.h>
#include<stdlib.h>

int main()
{
    char names[20];
    int x;
    for(x=0; x<10; x++){
    printf("Enter name:");
    fgets(names, 20, stdin);
    printf("%s", names);
    }
    return 0;
    }