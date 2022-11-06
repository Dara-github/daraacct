#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sent[15];
    printf("Enter the sentence:");
    scanf("%s", &sent);
    int lent=0;
    for(int x=0; x<=sizeof(sent); x++){
    char reverse[15];
    lent=sizeof(sent)-x;
    printf("%c", sent[lent]);
    }
    return 0;
    }