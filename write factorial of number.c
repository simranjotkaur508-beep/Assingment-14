#include<stdio.h>
int main()
{
    int a,f,n;
    printf("enter a number");
    scanf("%d",&n);
    for(a=1,f=1;a<=n;a++)
    {
        f=f*a;
        printf("factorial is %d",f);

    }
    return 0;
}