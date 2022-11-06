#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,d;
    double root1, root2;
    printf("Enter the coefficients of the quadratic equation:");
    scanf("%d%d%d", &a,&b,&c);
    d=b*b-4*a*c;
    if(d<0){
    printf("1st root=%.2lf+i%.2lf\n", -b/(double)(2*a),sqrt(-d)/(2*a));
    printf("2nd root=%.2lf-i%.2lf\n", -b/(double)(2*a),sqrt(-d)/(2*a));
    }
    else{
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);
    printf("The 1st root is: %.2lf\n", root1);
    printf("The 2nd root is: %.2lf\n", root2);
    }
    return 0;
    }