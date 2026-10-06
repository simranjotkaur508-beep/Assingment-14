#include<stdio.h>
int main()
{
    int a,b,L;
    printf("enter two number");
    scanf("%d ,%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L++)
    break;
    printf("LCM is %d",L);
    return 0;
}