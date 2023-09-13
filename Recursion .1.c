#include<stdio.h>
int sum(int a){
    if(a==0) return 0;
    if(a%2==0) return a + sum(a-1);
    else return sum(a-1);
}

int factorial(int n)
{
    if(n==0) return 1;
    else return n * factorial(n-1);
}
void main()
{
    int a=5;
    int b;
    b=factorial(a);
    printf("%d",b);
}